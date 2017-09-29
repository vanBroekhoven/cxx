/*
* doublyLinkedList_lib.c
*/

//wrapper #ifndef
#ifndef doublyLinkedList_h  // checks whether the given token has been #defined earlier in the file or in an included file
#define doublyLinkedList_h

#include <stdbool.h>

typedef struct DllNodeTag
{
    void * data ;
    struct DllNodeTag * next;
    struct DllNodeTag * previous;
} DllNode ;

typedef struct
{
    DllNode * head;
    DllNode * tail;
} DoublyLinkedList;

#endif // doublyLinkedList_h
