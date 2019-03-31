#ifndef _GLOBAL_H
#define _GLOBAL_H

typedef struct
{
	int nKey;
} ListInfo;

#define LISTINFO ListInfo

typedef int( _cdecl* comp )( const void*, const void* );

int Compare( const void* p, const void* v );


#endif _GLOBAL_H


//---------------------------------------------------------------------

//	Include in file "global.h" :
//
// 1. should define structural type with basic type of info
//   placed on the list whisch will be used to compare items
//
// 2. should define the preprocessor constant as the basic type of
//   info placed on the list
//
// 3. should define the header of the comparison function
//   int(_cdecl* <FUNCTION_NAME>(const void*, const void*) );
//   which compares two items in the list.
//   Function returns:
//		  -1 if the first item is less then the second one
//		   0 if both items are equals
//		   1 if the firts item is greater then the second one
//   + zdefiniowaæ typ strukturalny "ListInfo" z polem typu int "nKey"