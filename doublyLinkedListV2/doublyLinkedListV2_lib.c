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

/*
* IMPORTANT
* All functions should have a unit-test
* We must use a framework, like: https://nemequ.github.io/munit/ for this
* Write unit-test before writing the function itself
* This is called: 'test driving approach'.
* The test-functions should be placed in main.c
*/


/*
* sources:
* https://www.tutorialspoint.com/data_structures_algorithms/doubly_linked_list_program_in_c.htm
* https://gist.github.com/mycodeschool/7429492
*/

/*SECTION 1: function to create new list*/
//nodig om de library generic te maken
//leraar zei dat je nieuwe lijsten moet aanmaken in je main
DoublyLinkedList *getNewList()
{
    //allocate memory for new list with malloc
    //something with links

    //return newList
}

/*SECTION 2: function to create new node*/
//with void *pointer -> to make list generic
DllNode *getNewNode(void *data)
{
    //allocate memory for new node with malloc
    //something with links

    //return newNode
}

/*SECTION 3.1: functions to add nodes to list*/
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

/*SECTION 3.2: functions to add nodes to list part2*/
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

/*SECTION 4: function to delete node from list*/
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

/*SECTION 5.1: flexible and generic find functions*/
//find first node which contains specific datatype
//see example of generic find function: https://bitbucket.org/HR_ELEKTRO/cxx01/raw/master/Programs/genericFind/genericFind.c
void findFirst()
{
    //use a generic find function
}

//find last node which contains specific datatype
void findLast()
{
    //use a generic find function
}

/*SECTION 5.2: flexible and generic find functions part2*/
//find FIRST node which contains specific datatype AFTER a given node
void findFirstAfterNodeX()
{
    //combination of section 3.2 & 5.1
        //use navigation of section 3.2
        //use generic find function of 5.1
}

//find FIRST node which contains specific datatype BEFORE a given node
void findFirstBeforeNodeX()
{
    //combination of section 3.2 & 5.1
        //use navigation of section 3.2
        //use generic find function of 5.1
}

/*SECTION 6: retrieving the number of nodes*/
//function to count the number of nodes in list and return the value
int countNodes()
{
    //http://www.geeksforgeeks.org/find-length-of-a-linked-list-iterative-and-recursive/
    //look at method 2 & 3 on: http://www.c4learn.com/data-structure/counting-number-of-nodes-in-singly-linked-list/
}

/*SECTION 7: delete whole list*/
//function to delete the entire linked list
void deleteList()
{
    //http://www.geeksforgeeks.org/write-a-function-to-delete-a-linked-list/
}

