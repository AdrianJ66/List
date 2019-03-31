#ifndef _LIST_H
#define _LIST_H

#include "global.h"

typedef struct tagListItem
{
	LISTINFO* pInfo; 
	tagListItem* pNext; 

}ListItem;

ListItem* FindPrevious( ListItem* pList, const void* x, ListItem** pPrev, int( _cdecl *comp )( const void*, const void* ) );		// znajduje																						podany element na liscie // wskaznik na funkcje Compare
LISTINFO* CreateListElement( int num ); //moja funkcja prywatna
ListItem* CreateEmptyList();	// tworzy pusta liste (ma zrobic pusty element na poczatku), jesli funkcja zwróci NULL
ListItem* Front( ListItem* pList );		//odpowiednik funkcji top - zwraca szczytowy element listy (ca³y element listy)
void Insert( ListItem* pAfter, LISTINFO* pInfo );		// wstawianie po danym elemencie
void InsertOnFront( ListItem* pList, LISTINFO* pInfo );		//wstawianie na poczatek
void RemoveAfter( ListItem* pAfter );		//usuniecie elementow o danych wskaznikach, po elemencie na który wskazuje wskaŸnik
void RemoveOnFront( ListItem* pList );		//odpowiednik pop - usuwa szczytowy element z listy
void FreeList( ListItem* pList );		//czysci liste - zostawia tylko glowe
//void SortList( ListItem* pList, int( __cdecl * comp )( const void*, const void* ) );	// sortuje liste przez wstawianie 
void LSort( ListItem* pList, int( __cdecl * comp )( const void*, const void* ) );
void DelList( ListItem** pHead );		//usuwa ca³¹ liste
void PrintList( ListItem* pList );


#endif _LIST_INCLUDE_

