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

/* sources:
* https://www.tutorialspoint.com/data_structures_algorithms/doubly_linked_list_program_in_c.htm
* https://gist.github.com/mycodeschool/7429492
*/

/*function to create new node*/
//with void *pointer -> to make list generic
DllNode *getNewNode(void *data)
{
    //allocate memory with malloc
    //something with links

    //return something
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

/*function to delete node from list*/
//delete a link with given key
DllNode *deleteGivenNode()  //function on tutorialsprint: 'struct node* delete(int key)' -> dont know if my function-decleration works
{
    //start from the first link
        //
    //if list is empty
        //return NULL
    //navigate through list
        //while(current->key != key)
    //if it is last node
        //return NULL
    //else
        //store reference to current link
    //move to next link

    //found a match, update the link
    //if(current == head) {
        //change first to point to next link
        // head = head->next;
    //else
        //bypass the current link
    //if(current == last)
        //change last to point to prev link
    //else
        //something??

    //return current
}

/*function to create new list*/
//Ben niet zeker of deze functie nodig is



