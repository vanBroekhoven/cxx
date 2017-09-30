#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "doublyLinkedList_lib.h"
#include "munit.h"

/* For unit-testing of the program, we use the 'µnit framework'
*  Link: https://nemequ.github.io/munit/
*/

static MunitResult
test_getNewNode(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;

	/* Initialize variables */
	int i = 1;
	char c = 'C';

	/* Generating a new node */
	DllNode* testNode_i = getNewNode(&i);
	DllNode* testNode_c = getNewNode(&c);

	/* Check with Integers*/
	munit_assert_null(testNode_i->previous);
	munit_assert_null(testNode_i->next);
	munit_assert_int(*((int*)(testNode_i->data)), ==, i);

	/* Check with Characters*/
	munit_assert_null(testNode_c->previous);
	munit_assert_null(testNode_c->next);
	munit_assert_int(*((char*)(testNode_c->data)), ==, c);

	free(testNode_i);
	free(testNode_c);

    return MUNIT_OK;
}

/*
 * Test functions to test the creation of a List
 * Testing if head & tail pointer == NULL
*/
static MunitResult
test_createNewList(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;

	// here comes test-program

	return MUNIT_OK;
}

static MunitResult
test_insertAtHead(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;

	// here comes test-program
	return MUNIT_OK;
}

/*
 * Test to check if counting nodes of list works
*/
static MunitResult
test_countNodes(const MunitParameter params[], void* user_data) {
	(void) params;
	(void) user_data;

	// here comes test-program

	return MUNIT_OK;
}


/* A test suite is a bunch of tests combined together */
static MunitTest test_suite_tests[] = {
	{ (char*) "/getNewNode", test_getNewNode, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
	{ (char*) "/createNewList", test_createNewList, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
	{ (char*) "/insertAtHead", test_insertAtHead, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
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
