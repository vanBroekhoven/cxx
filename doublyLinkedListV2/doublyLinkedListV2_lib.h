/*
* File: doublyLinkedListV2.h
* Author: Tim van Broekhoven
* Date of creation: 27-09-2017
* Date of emission: 27-09-2017
* Description: assignment double linked list
*/

#ifndef doublyLinkedListV2_h
#define doublyLinkedListV2_h

#include <stdbool.h>

//typedef nodeStruct
typedef struct DllNodeTag
{
	void * data;
	struct DllNodeTag * next;
	struct DllNodeTag * previous;
} DllNode ;

//typedef listStruct
typedef struct
{
	DllNode * head;
	DllNode * tail;
} DoublyLinkedList;

//function declarations

#endif
