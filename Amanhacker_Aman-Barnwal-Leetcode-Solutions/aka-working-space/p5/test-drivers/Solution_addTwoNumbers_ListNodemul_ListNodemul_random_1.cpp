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

#define AKA_TEST_PATH_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p5\\test-paths\\Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1.tp"

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

#define AKA_EXEC_TRACE_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p5\\execution-results\\Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1.trc"

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
#include "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p5\\instruments\0445-add-two-numbers-ii\0445-add-two-numbers-ii.akaignore.cpp"
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
AKA_mark("Calling: \\Solution()|ROOT\\0445-add-two-numbers-ii.cpp\\GLOBAL\\AKA_INSTANCE___Solution\\AKA_INSTANCE___Solution\\Solution()");AKA_fCall++;AKA_INSTANCE___Solution = new ::Solution();


ListNode* l1;
std::vector<ListNode*> AKA_VECTOR_INIT_l2;


/* SubStructDataNode l2 */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l20_x=1543313936;
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0 = new ::ListNode(l20_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0).val=-419620350;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l2_0_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[0]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_0 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_0).val=764421970;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_0).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l20_next1_x=1673415634;
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[1]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_1 = new ::ListNode(l20_next1_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_1).val=949622259;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_1).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_1);
(*AKA_VECTOR_INIT_l2_0).next = AKA_VECTOR_INIT_l2_0_DOT_next[0];

AKA_VECTOR_INIT_l2.push_back(AKA_VECTOR_INIT_l2_0);


/* SubStructDataNode l2 */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int l21_x=-37458248;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l21_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\ListNode(int,ListNode*)\\next\\next[0]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l21_next_0 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l21_next_0).val=-1826354959;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l21_next_0).next;
AKA_VECTOR_INIT_l21_next.push_back(AKA_VECTOR_INIT_l21_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int l21_next1_x=1366628508;
/* PointerStructureDataNode next */
ListNode* l21_next1_next;
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\ListNode(int,ListNode*)\\next\\next[1]\\next\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_l21_next_1 = new ::ListNode(l21_next1_x,l21_next1_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l21_next_1).val=1132923910;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l21_next_1).next;
AKA_VECTOR_INIT_l21_next.push_back(AKA_VECTOR_INIT_l21_next_1);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\ListNode(int,ListNode*)\\next\\next[2]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l21_next_2 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l21_next_2).val=519163437;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l21_next_2).next;
AKA_VECTOR_INIT_l21_next.push_back(AKA_VECTOR_INIT_l21_next_2);
ListNode* l21_next = AKA_VECTOR_INIT_l21_next[0];
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_1 = new ::ListNode(l21_x,l21_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_1).val=-677837447;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l2_1_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\next\\next[0]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l2_1_DOT_next_0 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_1_DOT_next_0).val=-1826354959;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_1_DOT_next_0).next;
AKA_VECTOR_INIT_l2_1_DOT_next.push_back(AKA_VECTOR_INIT_l2_1_DOT_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int l21_next1_x=1366628508;
/* PointerStructureDataNode next */
ListNode* l21_next1_next;
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\next\\next[1]\\next\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_1_DOT_next_1 = new ::ListNode(l21_next1_x,l21_next1_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_1_DOT_next_1).val=1132923910;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_1_DOT_next_1).next;
AKA_VECTOR_INIT_l2_1_DOT_next.push_back(AKA_VECTOR_INIT_l2_1_DOT_next_1);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\next\\next[2]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l2_1_DOT_next_2 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_1_DOT_next_2).val=519163437;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_1_DOT_next_2).next;
AKA_VECTOR_INIT_l2_1_DOT_next.push_back(AKA_VECTOR_INIT_l2_1_DOT_next_2);
(*AKA_VECTOR_INIT_l2_1).next = AKA_VECTOR_INIT_l2_1_DOT_next[0];

AKA_VECTOR_INIT_l2.push_back(AKA_VECTOR_INIT_l2_1);


/* SubStructDataNode l2 */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int l22_x=184037934;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l22_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l22_next0_x=-669421087;
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_2\\l2\\ListNode(int,ListNode*)\\next\\next[0]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l22_next_0 = new ::ListNode(l22_next0_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l22_next_0).val=1001489357;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l22_next_0).next;
AKA_VECTOR_INIT_l22_next.push_back(AKA_VECTOR_INIT_l22_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_2\\l2\\ListNode(int,ListNode*)\\next\\next[1]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l22_next_1 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l22_next_1).val=606145693;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l22_next_1).next;
AKA_VECTOR_INIT_l22_next.push_back(AKA_VECTOR_INIT_l22_next_1);
ListNode* l22_next = AKA_VECTOR_INIT_l22_next[0];
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_2\\l2\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_2 = new ::ListNode(l22_x,l22_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_2).val=-1773300600;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l2_2_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l22_next0_x=-669421087;
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int)|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_2\\l2\\next\\next[0]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_2_DOT_next_0 = new ::ListNode(l22_next0_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_2_DOT_next_0).val=1001489357;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_2_DOT_next_0).next;
AKA_VECTOR_INIT_l2_2_DOT_next.push_back(AKA_VECTOR_INIT_l2_2_DOT_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()|ROOT\\0445-add-two-numbers-ii.cpp\\addTwoNumbers(ListNode*,ListNode*)\\l2\\AKA_VECTOR_INIT_l2_2\\l2\\next\\next[1]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l2_2_DOT_next_1 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_2_DOT_next_1).val=606145693;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_2_DOT_next_1).next;
AKA_VECTOR_INIT_l2_2_DOT_next.push_back(AKA_VECTOR_INIT_l2_2_DOT_next_1);
(*AKA_VECTOR_INIT_l2_2).next = AKA_VECTOR_INIT_l2_2_DOT_next[0];

AKA_VECTOR_INIT_l2.push_back(AKA_VECTOR_INIT_l2_2);

ListNode* l2 = AKA_VECTOR_INIT_l2[0];
ListNode* AKA_EXPECTED_OUTPUT;

/* RootDataNode STATIC */
/* PointerStructureDataNode l1 */
/* PointerStructureDataNode l2 */
/* PointerStructureDataNode RETURN */



AKA_mark("<<PRE-CALLING>> Test Solution_addTwoNumbers_ListNodemul_ListNodemul_random_1");ListNode* AKA_ACTUAL_OUTPUT=AKA_INSTANCE___Solution->addTwoNumbers(l1,l2);
AKA_fCall++;AKA_mark("Return from: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");




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
