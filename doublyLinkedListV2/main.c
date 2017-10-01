/*
* File: main.c
* Author: Tim van Broekhoven
* Date of creation: 27-09-2017
* Date of emission: 27-09-2017
* Description: assignment double linked list
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "doublyLinkedListV2_lib.h"
#include "munit.h"  //'micro-unit framework for testing code'

/*UNIT-TEST 1: function for creation of a list*/
//Testing if head & tail pointer == NULL
static MunitResult
test_getNewList(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;

	//?? see pseudo-code of UNIT-TEST 2 for better example

	//generate new list

	//??

	//free memory

    return MUNIT_OK;
}

/*UNIT-TEST 2: function for creation of a node*/
//Testing if previous & next pointer == NULL
static MunitResult
test_getNewNode(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;

	//initialize 2 differend type of variables
	//int i = 1;
	//char c = 'C';

	//generate new node

	//check with integers

	//check with characters

	//free memory

    return MUNIT_OK;
}

/*UNIT-TEST 3: function for inserting node at head*/
//Testing if ...
static MunitResult
test_insertNodeAtHead(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;


	//free memory

    return MUNIT_OK;
}

/*UNIT-TEST 4: function for inserting node at tail*/
//Testing if ...
static MunitResult
test_insertNodeAtTail(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;


	//free memory

    return MUNIT_OK;
}

/*UNIT-TEST 5: function for counting nodes*/
//Testing if ...
static MunitResult
test_countNodes(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;


	//free memory

    return MUNIT_OK;
}


/* A test suite is a bunch of tests combined together */
static MunitTest test_suite_tests[] = {
	{ (char*) "/getNewNode", test_getNewNode, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
	{ (char*) "/getNewList", test_getNewList, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
	{ (char*) "/insertNodeAtHead", test_insertNodeAtHead, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
	{ (char*) "/insertNodeAtTail", test_insertNodeAtTail, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
	{ (char*) "/countNodes", test_countNodes, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
	/* Always add this one to tell runner testing is over! */
	{ NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

/* Main runner that picks which suites we should run */
static const MunitSuite test_suite = {
	(char*) "test",
	test_suite_tests,
	NULL,
	1,
	MUNIT_SUITE_OPTION_NONE
};

int main(int argc, char* argv[MUNIT_ARRAY_PARAM(argc + 1)])
{

    return munit_suite_main(&test_suite, (void*) "µnit", argc, argv);
}
