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

#define AKA_TEST_PATH_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p11v1\\test-paths\\TreeNode_int_TreeNodemul_TreeNodemul_random_0.tp"

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

#define AKA_EXEC_TRACE_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p11v1\\execution-results\\TreeNode_int_TreeNodemul_TreeNodemul_random_0.trc"

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
#include "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p11v1\\instruments\104-maximum-depth-of-binary-tree\104-maximum-depth-of-binary-tree.akaignore.cpp"
/** Guard statement to avoid multiple declaration */
#ifndef AKA_GLOBAL_AKA_INSTANCE___TreeNode
#define AKA_GLOBAL_AKA_INSTANCE___TreeNode
::TreeNode* AKA_INSTANCE___TreeNode;
#endif


using namespace std;

////////////////////////////////////////
//  BEGIN TEST SCRIPTS SECTION        //
////////////////////////////////////////

void AKA_TEST_TreeNode_int_TreeNodemul_TreeNodemul_random_0(void) {
{
AKA_test_case_name="TreeNode_int_TreeNodemul_TreeNodemul_random_0";

// set up
;


/* SubStructDataNode AKA_INSTANCE___TreeNode */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int AKA_INSTANCE___TreeNode_x=-1155804964;
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode()|ROOT\\104-maximum-depth-of-binary-tree.cpp\\GLOBAL\\AKA_INSTANCE___TreeNode\\AKA_INSTANCE___TreeNode\\TreeNode(int,TreeNode*,TreeNode*)\\left\\left[0]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_0 = new ::TreeNode();
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_0).right;
AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left.push_back(AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int AKA_INSTANCE___TreeNode_left1_x=611897985;
AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode(int)|ROOT\\104-maximum-depth-of-binary-tree.cpp\\GLOBAL\\AKA_INSTANCE___TreeNode\\AKA_INSTANCE___TreeNode\\TreeNode(int,TreeNode*,TreeNode*)\\left\\left[1]\\left\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_1 = new ::TreeNode(AKA_INSTANCE___TreeNode_left1_x);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_1).right;
AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left.push_back(AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_1);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int AKA_INSTANCE___TreeNode_left2_x=-1247191635;
/* PointerStructureDataNode left */
TreeNode* AKA_INSTANCE___TreeNode_left2_left;
/* PointerStructureDataNode right */
TreeNode* AKA_INSTANCE___TreeNode_left2_right;
AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\104-maximum-depth-of-binary-tree.cpp\\GLOBAL\\AKA_INSTANCE___TreeNode\\AKA_INSTANCE___TreeNode\\TreeNode(int,TreeNode*,TreeNode*)\\left\\left[2]\\left\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_2 = new ::TreeNode(AKA_INSTANCE___TreeNode_left2_x,AKA_INSTANCE___TreeNode_left2_left,AKA_INSTANCE___TreeNode_left2_right);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_2).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_2).right;
AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left.push_back(AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left_2);
TreeNode* AKA_INSTANCE___TreeNode_left = AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_left[0];
/* PointerStructureDataNode right */
TreeNode* AKA_INSTANCE___TreeNode_right;
AKA_mark("<<PRE-CALLING>> Test TreeNode_int_TreeNodemul_TreeNodemul_random_0");AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\104-maximum-depth-of-binary-tree.cpp\\GLOBAL\\AKA_INSTANCE___TreeNode\\AKA_INSTANCE___TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;AKA_INSTANCE___TreeNode = new ::TreeNode(AKA_INSTANCE___TreeNode_x,AKA_INSTANCE___TreeNode_left,AKA_INSTANCE___TreeNode_right);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode()|ROOT\\104-maximum-depth-of-binary-tree.cpp\\GLOBAL\\AKA_INSTANCE___TreeNode\\AKA_INSTANCE___TreeNode\\left\\left[0]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_0 = new ::TreeNode();
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_0).right;
AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left.push_back(AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int AKA_INSTANCE___TreeNode_left1_x=611897985;
AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode(int)|ROOT\\104-maximum-depth-of-binary-tree.cpp\\GLOBAL\\AKA_INSTANCE___TreeNode\\AKA_INSTANCE___TreeNode\\left\\left[1]\\left\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_1 = new ::TreeNode(AKA_INSTANCE___TreeNode_left1_x);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_1).right;
AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left.push_back(AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_1);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int AKA_INSTANCE___TreeNode_left2_x=-1247191635;
/* PointerStructureDataNode left */
TreeNode* AKA_INSTANCE___TreeNode_left2_left;
/* PointerStructureDataNode right */
TreeNode* AKA_INSTANCE___TreeNode_left2_right;
AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\104-maximum-depth-of-binary-tree.cpp\\GLOBAL\\AKA_INSTANCE___TreeNode\\AKA_INSTANCE___TreeNode\\left\\left[2]\\left\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_2 = new ::TreeNode(AKA_INSTANCE___TreeNode_left2_x,AKA_INSTANCE___TreeNode_left2_left,AKA_INSTANCE___TreeNode_left2_right);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_2).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_2).right;
AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left.push_back(AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left_2);
AKA_INSTANCE___TreeNode->left = AKA_VECTOR_INIT_AKA_INSTANCE___TreeNode_POINT_TO_left[0];
/* PointerStructureDataNode right */
AKA_INSTANCE___TreeNode->right;







/* error assertion */


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
	AKA_run_test("TREENODE_INT_TREENODEMUL_TREENODEMUL_RANDOM_0", &AKA_TEST_TreeNode_int_TreeNodemul_TreeNodemul_random_0, 1);


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
