#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "doublyLinkedList_lib.h"

// function to create new node
// -> this function can be used by functions insert node at head, tail and others
DllNode* getNewNode(void *data)
{
    DllNode* newNode = malloc(sizeof(DllNode));
    if(newNode == 0) exit(1);
    newNode->data = data;
    newNode->previous = NULL;
    newNode->next = NULL;
    return newNode;
}

// function to create a node at head
void insertAtHead(DoublyLinkedList* listPointer, void *data)
{
    // get new node from function getNewNode
    DllNode* newNode = getNewNode(data);
    // if list is empty
    if(listPointer->head == NULL)
    {
        // set head as address of newNode
        listPointer->head = newNode;
    }
    // list is not empty
    else
	{
		listPointer->head->previous = newNode;
		newNode->next = listPointer->head;
		listPointer->head = newNode->previous;
	}
}

// function to create a node at tail
void insertAtTail(DoublyLinkedList* listPointer, void *data)
{
    //
}

int countNodes(DoublyLinkedList* listOfNodesToCount)
{
    //
}




