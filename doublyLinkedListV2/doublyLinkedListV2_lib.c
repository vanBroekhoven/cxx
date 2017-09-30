/*
* File: doublyLinkedListV2.c
* Author: Tim van Broekhoven
* Date of creation: 27-09-2017
* Date of emission: 27-09-2017
* Description: assignment double linked list
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "doublyLinkedListV2_lib.h"

/*function to create new node*/
//with void *pointer -> to make list generic
DllNode *getNewNode(void *data)
{
    //allocate memory with malloc
    //something
}

/*functions to add nodes to list*/
//add node at the beginning
void insertAtHead()
{
    //use function getNewNode
    //if list is empty
        //address head = address tail -> set as address of newNode
        //return?
    //list is not empty
        //create links
}

void insertAtTail()
{
    //use function getNewNode
    //if list is empty
        //address head = address tail -> set as address of newNode
        //return?
    //while(((address head) != NULL)
        //go to last node
        //set links
}

void insertAfterNode()
{
    //use function getNewNode
    //if list is empty
        //return false
    //navigate through list
    //while(current->key != key)
        //if it is last node
            //return false
        //else
            //move to next link
    //create new node
}

void insertBeforeNode()
{
    //see function insertAfterNode
}




