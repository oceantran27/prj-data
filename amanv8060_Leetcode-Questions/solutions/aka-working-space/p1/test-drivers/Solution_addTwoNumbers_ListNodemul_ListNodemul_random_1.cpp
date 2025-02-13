/*
 * TEST DRIVER FOR C++
 * @author: VNU-UET
 * Generate automatically by AKAUTAUTO
 */

// include some necessary standard libraries
#include <cstdio>
#include <string>
#include <fstream>
#include <string.h>
#include <vector>

#define ASSERT_ENABLE

// define maximum line of test path
#define AKA_MARK_MAX 4294967290

// function call counter
int AKA_fCall = 0;

// test case name
char* AKA_test_case_name;

typedef void (*AKA_Test)();

void AKA_run_test(std::string name, AKA_Test test, int iterator);

////////////////////////////////////////
//  BEGIN TEST PATH SECTION           //
////////////////////////////////////////

#define AKA_TEST_PATH_FILE "D:\\Projects\\AKAUT\\prj-data\\amanv8060_Leetcode-Questions\\solutions\\aka-working-space\\p1\\test-paths\\Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1.tp"

void AKA_append_test_path(std::string content);

int AKA_mark(std::string append);

int AKA_mark(char * append)
{
    std::string str(append);
    return AKA_mark(str);
}

////////////////////////////////////////
//  END TEST PATH SECTION             //
////////////////////////////////////////


////////////////////////////////////////
//  BEGIN TEST RESULT SECTION         //
////////////////////////////////////////

#define AKA_EXEC_TRACE_FILE "D:\\Projects\\AKAUT\\prj-data\\amanv8060_Leetcode-Questions\\solutions\\aka-working-space\\p1\\execution-results\\Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1.trc"

void AKA_append_test_result(std::string content);

void AKA_assert_method
(
    std::string actualName, int actualVal,
    std::string expectedName, int expectedVal,
    std::string method
);

void AKA_assert_string_method
(
    std::string actualName, std::string actualVal,
    std::string expectedName, std::string expectedVal,
    std::string method
);

void AKA_assert_double_method
(
    std::string actualName, double actualVal,
    std::string expectedName, double expectedVal,
    std::string method
);

void AKA_assert_ptr_method
(
    std::string actualName, void* actualVal,
    std::string expectedName, void* expectedVal,
    std::string method
);

#define NULL_STRING ""

void AKA_assert
(
    std::string actualName, int actualVal,
    std::string expectedName, int expectedVal
)
{
    AKA_assert_method
    (
        actualName, actualVal,
        expectedName, expectedVal,
        NULL_STRING
    );
}

int AKA_assert_double
(
    std::string actualName, double actualVal,
    std::string expectedName, double expectedVal
)
{
    AKA_assert_double_method
    (
        actualName, actualVal,
        expectedName, expectedVal,
        NULL_STRING
    );
}


int AKA_assert_string
(
    std::string actualName, std::string actualVal,
    std::string expectedName, std::string expectedVal
)
{
    AKA_assert_string_method
    (
        actualName, actualVal,
        expectedName, expectedVal,
        NULL_STRING
    );
}

int AKA_assert_ptr
(
    std::string actualName, void* actualVal,
    std::string expectedName, void* expectedVal
)
{
    AKA_assert_ptr_method
    (
        actualName, actualVal,
        expectedName, expectedVal,
        NULL_STRING
    );
}

void AKA_assert
(
    char* actualName, int actualVal,
    char* expectedName, int expectedVal
)
{
    std::string strAct(actualName);
    std::string strExp(expectedName);
    AKA_assert(strAct, actualVal, strExp, expectedVal);
}

int AKA_assert_double
(
    char* actualName, double actualVal,
    char* expectedName, double expectedVal
)
{
    std::string strAct(actualName);
    std::string strExp(expectedName);
    AKA_assert_double(strAct, actualVal, strExp, expectedVal);
}

int AKA_assert_ptr
(
    char* actualName, void* actualVal,
    char* expectedName, void* expectedVal
)
{
    std::string strAct(actualName);
    std::string strExp(expectedName);
    AKA_assert_ptr(strAct, actualVal, strExp, expectedVal);
}

////////////////////////////////////////
//  END TEST RESULT SECTION           //
////////////////////////////////////////


////////////////////////////////////////
//  BEGIN SET UP - TEAR DOWN SECTION  //
////////////////////////////////////////

/*
 * This function call before main test driver
 */
void AKA_set_up();

/*
 * This function call after main test driver
 */
void AKA_tear_down();

////////////////////////////////////////
//  END SET UP - TEAR DOWN SECTION    //
////////////////////////////////////////

// Some test cases need to include specific additional headers



// Include akaignore file
#include "D:\\Projects\\AKAUT\\prj-data\\amanv8060_Leetcode-Questions\\solutions\\aka-working-space\\p1\\instruments\2.akaignore.cpp"
/** Guard statement to avoid multiple declaration */
#ifndef AKA_GLOBAL_AKA_INSTANCE___Solution
#define AKA_GLOBAL_AKA_INSTANCE___Solution
::Solution* AKA_INSTANCE___Solution;
#endif


using namespace std;

////////////////////////////////////////
//  BEGIN TEST SCRIPTS SECTION        //
////////////////////////////////////////

void AKA_TEST_Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1(void) {
{
AKA_test_case_name="Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1";

// set up
;


/* SubClassDataNode AKA_INSTANCE___Solution */
/* ConstructorDataNode Solution() */
AKA_mark("Calling: \\Solution()|ROOT\\2.cpp\\GLOBAL\\AKA_INSTANCE___Solution\\AKA_INSTANCE___Solution\\Solution()");AKA_fCall++;AKA_INSTANCE___Solution = new ::Solution();


std::vector<ListNode*> AKA_VECTOR_INIT_l1;


/* SubStructDataNode l1 */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l10_x=790116447;
AKA_mark("Calling: .\\p1\\2.cpp\\ListNode\\ListNode(int)|ROOT\\2.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l1\\AKA_VECTOR_INIT_l1_0\\l1\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l1_0 = new ::ListNode(l10_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l1_0).val=1682430718;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l1_0).next;

AKA_VECTOR_INIT_l1.push_back(AKA_VECTOR_INIT_l1_0);

ListNode* l1 = AKA_VECTOR_INIT_l1[0];
std::vector<ListNode*> AKA_VECTOR_INIT_l2;


/* SubStructDataNode l2 */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l20_x=-1756953366;
AKA_mark("Calling: .\\p1\\2.cpp\\ListNode\\ListNode(int)|ROOT\\2.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0 = new ::ListNode(l20_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0).val=-734822120;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l2_0_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p1\\2.cpp\\ListNode\\ListNode()|ROOT\\2.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[0]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_0 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_0).val=-1744437012;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_0).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p1\\2.cpp\\ListNode\\ListNode()|ROOT\\2.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[1]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_1 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_1).val=-241980715;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_1).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_1);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l20_next2_x=-413260567;
AKA_mark("Calling: .\\p1\\2.cpp\\ListNode\\ListNode(int)|ROOT\\2.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[2]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_2 = new ::ListNode(l20_next2_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_2).val=862509942;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_2).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_2);
(*AKA_VECTOR_INIT_l2_0).next = AKA_VECTOR_INIT_l2_0_DOT_next[0];

AKA_VECTOR_INIT_l2.push_back(AKA_VECTOR_INIT_l2_0);

ListNode* l2 = AKA_VECTOR_INIT_l2[0];
ListNode* AKA_EXPECTED_OUTPUT;

/* RootDataNode STATIC */
/* PointerStructureDataNode l1 */
/* PointerStructureDataNode l2 */
/* PointerStructureDataNode RETURN */



AKA_mark("<<PRE-CALLING>> Test Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1");ListNode* AKA_ACTUAL_OUTPUT=AKA_INSTANCE___Solution->addTwoNumbers(l1,l2);
AKA_fCall++;AKA_mark("Return from: .\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");




// tear down
;
}
}



////////////////////////////////////////
//  END TEST SCRIPTS SECTION          //
////////////////////////////////////////

/*
 * The main() function for setting up and running the tests.
 */
int main()
{
    AKA_set_up();

    /* Compound test case setup */

    /* add & run the tests */
	AKA_run_test("SOLUTION_ADDTWONUMBERS_LISTNODEMUL_LISTNODEMUL_RANDOM_1", &AKA_TEST_Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1, 1);


    /* Compound test case teardown */

    AKA_tear_down();

    return 0;
}

////////////////////////////////////////
//  BEGIN DEFINITIONS SECTION         //
////////////////////////////////////////

void AKA_append_test_path(std::string content)
{
    static unsigned int aka_mark_iterator = 0;

    std::ofstream outfile;
    outfile.open(AKA_TEST_PATH_FILE, std::ios_base::app);
    outfile << content;
    aka_mark_iterator++;

    // if the test path is too long, we need to terminate the process
    if (aka_mark_iterator >= AKA_MARK_MAX) {
        outfile << "\nThe test path is too long. Terminate the program automatically!";
        outfile.close();
        exit(0);
    }

    outfile.close();
}

void AKA_append_test_result(std::string content)
{
    std::ofstream outfile;
    outfile.open(AKA_EXEC_TRACE_FILE, std::ios_base::app);
    outfile << content;
    outfile.close();
}

int AKA_mark(std::string append)
{
    AKA_append_test_path(append + "\n");
    return 1;
}

#define AKA_BUFFER_SIZE 1024

void AKA_assert_method
(
    std::string actualName, int actualVal,
    std::string expectedName, int expectedVal,
    std::string userCode
)
{
    std::string buf = "{\n";

    buf.append("\"tag\": \"Aka function calls: ");
    char temp0[AKA_BUFFER_SIZE];
    sprintf(temp0, "%d\",", AKA_fCall);
    buf.append(temp0);
    buf.append("\n");

    if (!userCode.empty())
    {
        buf.append("\"userCode\": \"");
        buf.append(userCode);
        buf.append("\",\n");
    }

    buf.append("\"actualName\": \"");
    buf.append(actualName);
    buf.append("\",\n");
    char temp1[AKA_BUFFER_SIZE];
    sprintf(temp1, "\"actualVal\": \"%d\",", actualVal);
    buf.append(temp1);
    buf.append("\n");

    buf.append("\"expectedName\": \"");
    buf.append(expectedName);
    buf.append("\",\n");
    char temp2[AKA_BUFFER_SIZE];
    sprintf(temp2, "\"expectedVal\": \"%d\"", expectedVal);
    buf.append(temp2);
    buf.append("\n},\n");

    AKA_append_test_result(buf);
}

void AKA_assert_string_method(
    std::string actualName, std::string actualVal,
    std::string expectedName, std::string expectedVal,
    std::string userCode)
{
    std::string buf = "{\n";

    buf.append("\"tag\": \"Aka function calls: ");
    char temp0[AKA_BUFFER_SIZE];
    sprintf(temp0, "%d\",", AKA_fCall);
    buf.append(temp0);
    buf.append("\n");

    if (!userCode.empty())
    {
        buf.append("\"userCode\": \"");
        buf.append(userCode);
        buf.append("\",\n");
    }

    buf.append("\"actualName\": \"");
    buf.append(actualName);
    buf.append("\",\n");

    char temp1[AKA_BUFFER_SIZE];
    sprintf(temp1, "\"actualVal\": \"%s\",", actualVal.c_str());
    buf.append(temp1);
    buf.append("\n");

    buf.append("\"expectedName\": \"");
    buf.append(expectedName);
    buf.append("\",\n");

    char temp2[AKA_BUFFER_SIZE];
    sprintf(temp2, "\"expectedVal\": \"%s\"", expectedVal.c_str());
    buf.append(temp2);
    buf.append("\n},\n");

    AKA_append_test_result(buf);
}

void AKA_assert_double_method
(
    std::string actualName, double actualVal,
    std::string expectedName, double expectedVal,
    std::string userCode
)
{
    std::string buf = "{\n";

    buf.append("\"tag\": \"Aka function calls: ");
    char temp0[AKA_BUFFER_SIZE];
    sprintf(temp0, "%d\",", AKA_fCall);
    buf.append(temp0);
    buf.append("\n");

    if (!userCode.empty())
    {
        buf.append("\"userCode\": \"");
        buf.append(userCode);
        buf.append("\",\n");
    }

    buf.append("\"actualName\": \"");
    buf.append(actualName);
    buf.append("\",\n");

    char temp1[AKA_BUFFER_SIZE];
    sprintf(temp1, "\"actualVal\": \"%lf\",", actualVal);
    buf.append(temp1);
    buf.append("\n");

    buf.append("\"expectedName\": \"");
    buf.append(expectedName);
    buf.append("\",\n");

    char temp2[AKA_BUFFER_SIZE];
    sprintf(temp2, "\"expectedVal\": \"%lf\"", expectedVal);
    buf.append(temp2);
    buf.append("\n},\n");

    AKA_append_test_result(buf);
}

void AKA_assert_ptr_method
(
    std::string actualName, void * actualVal,
    std::string expectedName, void * expectedVal,
    std::string userCode
)
{
    std::string buf = "{\n";

    buf.append("\"tag\": \"Aka function calls: ");
    char temp0[AKA_BUFFER_SIZE];
    sprintf(temp0, "%d\",", AKA_fCall);
    buf.append(temp0);
    buf.append("\n");

    if (!userCode.empty())
    {
        buf.append("\"userCode\": \"");
        buf.append(userCode);
        buf.append("\",\n");
    }

    buf.append("\"actualName\": \"");
    buf.append(actualName);
    buf.append("\",\n");

    char temp1[AKA_BUFFER_SIZE];
    sprintf(temp1, "\"actualVal\": \"%x\",", actualVal);
    buf.append(temp1);
    buf.append("\n");

    buf.append("\"expectedName\": \"");
    buf.append(expectedName);
    buf.append("\",\n");

    char temp2[AKA_BUFFER_SIZE];
    sprintf(temp2, "\"expectedVal\": \"%x\"", expectedVal);
    buf.append(temp2);
    buf.append("\n},\n");

    AKA_append_test_result(buf);
}

void AKA_run_test(std::string name, AKA_Test test, int iterator)
{
    std::string begin = "BEGIN OF " + name;
    AKA_mark(begin);

    int i;
    for (i = 0; i < iterator; i++) {
        test();
    }

    std::string end = "END OF " + name;
    AKA_mark(end);
}

void AKA_set_up()
{
    /*{{INSERT_SET_UP_HERE}}*/
}

void AKA_tear_down()
{
    /*{{INSERT_TEAR_DOWN_HERE}}*/
}

////////////////////////////////////////
//  END DEFINITIONS SECTION           //
////////////////////////////////////////
