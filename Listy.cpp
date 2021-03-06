// Listy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "global.h"
#include "listy.h"
#include <iostream>

using namespace std;

int main()
{
	ListItem* pList = CreateEmptyList();
	ListItem* pPrevious = NULL;
	LISTINFO* info;

	PrintList( pList );
	printf( "\n" );
	//
	//for ( int i = 1; i < 5; i++ )
	//{
	//	info = { i };
	//	Insert( pList, &info);
	//}
	//PrintList( pList );

	for ( int i = 1; i < 7; i++ )
	{
		info = CreateListElement( i );
		Insert( pList, info );
	}
	PrintList( pList );
	LISTINFO in = { 22 };
	printf( "\n" );
	Insert( pList->pNext->pNext, &in );
	PrintList( pList );

	printf( "\n" );
	RemoveAfter( pList->pNext );
	PrintList( pList );

	ListItem* front = Front( pList );
	printf( "\nFront: %d \n", front->pInfo->nKey );

	//ListItem* prev = FindPrevious( pList, pList->pNext->pNext->pNext, &pPrevious, Compare );
	//printf( "\nPrev: %d ", prev->pInfo->nKey );
	//
	
	printf( "\nPosortowana lista:\n" );
	LSort( pList, Compare );
	//SortList( pList, Compare );
	PrintList( pList );

	printf( "\n\n" );

	FreeList( pList );
	PrintList( pList );

	DelList( &pList );
	return 0;
}

