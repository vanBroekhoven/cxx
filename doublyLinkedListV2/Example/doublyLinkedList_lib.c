/*
 * doublyLinkedList_lib.c
 *
 *  Created on: 27 sep. 2017
 *      Author: Roy Lobbezoo & Tim van Broekhoven
 *
 *  Description:
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "doublyLinkedList_lib.h"

DllNode *getNewNode(void *data)
{
	DllNode* newNode = malloc(sizeof(DllNode));
	if(newNode == 0) exit(1);
	newNode->data = data;
	newNode->previous = NULL;
	newNode->next = NULL;
	return newNode;
}

DoublyLinkedList *getNewList()
{
	DoublyLinkedList* newList = malloc(sizeof(newList));
	if(newList == 0) exit(1);
	newList->head = NULL;
	newList->tail = NULL;
	return newList;
}

void insertNodeAtFront(DoublyLinkedList* listPointer, void *data)
{
	DllNode* newNode = getNewNode(data);

	if(listPointer->head == NULL)
	{
		listPointer->head = listPointer->tail = newNode;
	}
	else
	{
		listPointer->head->previous = newNode;
		newNode->next = listPointer->head;
		listPointer->head = newNode->previous;
	}
}

void insertNodeAtBack(DoublyLinkedList* listPointer, void* data) // Nog test schrijven
{
	DllNode* newNode = getNewNode(data);

	if(listPointer->tail == NULL)
	{
		listPointer->tail = listPointer->head = newNode;
	}
	else
	{
		listPointer->tail->next = newNode;
		newNode->previous = listPointer->tail;
		listPointer->tail = newNode->previous;
	}
}

void insertNodeBeforeAnother(DoublyLinkedList* listPointer, DllNode* nextNode, void* data) // Nog test schrijven
{
	DllNode* newNode = getNewNode(data);

	newNode->next = nextNode;

	if(nextNode->previous == NULL)
	{
		newNode->previous = NULL;
		listPointer->head = newNode;
	}
	else
	{
		newNode->previous = nextNode->previous;
		nextNode->previous = newNode;
		newNode->previous->next = newNode;
	}
}

void insertNodeAfterAnother(DoublyLinkedList* listPointer, DllNode* previousNode, void* data) // Nog test schrijven
{
	DllNode* newNode = getNewNode(data);

	newNode->previous = previousNode;

	if(previousNode->previous == NULL)
	{
		newNode->next = NULL;
		listPointer->tail = newNode;
	}
	else
	{
		newNode->next = previousNode->next;
		previousNode->next = newNode;
		newNode->next->previous = newNode;
	}
}

DllNode* searchFirstNodeWithSpecData(DoublyLinkedList* listToSearch, void* data) // Nog test schrijven
{
	DllNode* temporaryNode = listToSearch->head;

	if(listToSearch->head == NULL)
	{
		return NULL;
	}

	while(temporaryNode->next != NULL)
	{
		if(temporaryNode->data == data)
		{
			return temporaryNode;
		}
		else
		{
			temporaryNode = temporaryNode->next;
		}
	}
	return NULL;
}

DllNode* searchLastNodeWithSpecData(DoublyLinkedList* listToSearch, void* data) // Nog test schrijven
{
	DllNode* temporaryNode = listToSearch->tail;

	if(listToSearch->tail == NULL)
	{
		return NULL;
	}

	while(temporaryNode->previous != NULL) // Kan dit infinite while worden?
	{
		if(temporaryNode->data == data)
		{
			return temporaryNode;
		}
		else
		{
			temporaryNode = temporaryNode->previous;
		}
	}
	if (temporaryNode->previous == NULL)
	{
		if(temporaryNode->data == data)
		{
			return temporaryNode;
		}
		else
		{
			return NULL;
		}
	}
	return NULL; //Overbodig?
}

/*
 * Functions to delete nodes or lists
*/
void deleteNode(DllNode* nodeToDelete) // Nog test schrijven
{
	DllNode* nodePrevious = NULL;
	DllNode* nodeNext = NULL;

	nodePrevious = nodeToDelete->previous;
	nodeNext = nodeToDelete->next;
	nodePrevious->next = nodeNext;
	nodeNext->previous = nodePrevious;

	free(nodeToDelete);
}

void deleteEntireList(DoublyLinkedList* listToDelete) // Nog niet af
{
	DllNode* nodeShifter = NULL;

	nodeShifter = listToDelete->head;

	if(listToDelete->head == NULL)
	{
		free(listToDelete);
		return;
	}

	while(nodeShifter != listToDelete->tail)
	{
		listToDelete->head = nodeShifter->next;

		//free();
	}
}

/* Functions to count the number of nodes in a list */
int countNumberOfNodesInList(DoublyLinkedList* listOfNodesToCount) // Werkt nog niet correct
{
	DllNode* nodePointer = listOfNodesToCount->head;
	int nodeCounter = 0;

	//nodePointer = listOfNodesToCount->head;

	if(listOfNodesToCount->head == NULL)
	{
		return nodeCounter;
	}

	while(nodePointer != listOfNodesToCount->tail)
	{
		nodeCounter++;
		nodePointer = nodePointer->next;
	}
	return nodeCounter;
}

/* Search functions using predicates */

// predicate to find int > 0
bool intMoreThan0(void *theInt)
{
    return *(int *)theInt > 0;
}

DllNode *findFirst(DoublyLinkedList* listToSearch, bool (*predicate)(void *theData)) // Nog test schrijven
{
	DllNode* nodeToUse = listToSearch->head;

	if(listToSearch == NULL)
	{
		return NULL;
	}

	while(nodeToUse != listToSearch->tail)
	{
		if((*predicate)(nodeToUse->data))
		{
			return nodeToUse;
		}
		else
		{
			nodeToUse = nodeToUse->next;
		}
	}
	return NULL;
}

//    for (size_t i = 0; theArray[i] != 0; i++)
//    {
//        if ((*predicate)(theArray[i]))
//        {
//            return theArray[i];
//        }
//    }
