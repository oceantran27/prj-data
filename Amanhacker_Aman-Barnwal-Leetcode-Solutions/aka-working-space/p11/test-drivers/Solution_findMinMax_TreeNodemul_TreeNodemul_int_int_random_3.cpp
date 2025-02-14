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

#define AKA_TEST_PATH_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p11\\test-paths\\Solution_findMinMax_TreeNodemul_TreeNodemul_int_int_random_3.tp"

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

#define AKA_EXEC_TRACE_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p11\\execution-results\\Solution_findMinMax_TreeNodemul_TreeNodemul_int_int_random_3.trc"

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
#include "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p11\\instruments\1026-maximum-difference-between-node-and-ancestor\1026-maximum-difference-between-node-and-ancestor.akaignore.cpp"
/** Guard statement to avoid multiple declaration */
#ifndef AKA_GLOBAL_AKA_INSTANCE___Solution
#define AKA_GLOBAL_AKA_INSTANCE___Solution
::Solution* AKA_INSTANCE___Solution;
#endif


using namespace std;

////////////////////////////////////////
//  BEGIN TEST SCRIPTS SECTION        //
////////////////////////////////////////

void AKA_TEST_Solution_findMinMax_TreeNodemul_TreeNodemul_int_int_random_3(void) {
{
AKA_test_case_name="Solution_findMinMax_TreeNodemul_TreeNodemul_int_int_random_3";

// set up
;


/* SubClassDataNode AKA_INSTANCE___Solution */
/* ConstructorDataNode Solution() */
AKA_mark("Calling: \\Solution()|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\GLOBAL\\AKA_INSTANCE___Solution\\AKA_INSTANCE___Solution\\Solution()");AKA_fCall++;AKA_INSTANCE___Solution = new ::Solution();


std::vector<TreeNode*> AKA_VECTOR_INIT_root;


/* SubStructDataNode root */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int root0_x=-882486697;
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int)|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_0\\root\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_root_0 = new ::TreeNode(root0_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_0).val=-1429562951;
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_root_0_DOT_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode()|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_0\\root\\left\\left[0]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_root_0_DOT_left_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_0_DOT_left_0).val=-75412798;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_0_DOT_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_root_0_DOT_left_0).right;
AKA_VECTOR_INIT_root_0_DOT_left.push_back(AKA_VECTOR_INIT_root_0_DOT_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int root0_left1_x=-1066607572;
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int)|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_0\\root\\left\\left[1]\\left\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_root_0_DOT_left_1 = new ::TreeNode(root0_left1_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_0_DOT_left_1).val=-1009978362;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_0_DOT_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_root_0_DOT_left_1).right;
AKA_VECTOR_INIT_root_0_DOT_left.push_back(AKA_VECTOR_INIT_root_0_DOT_left_1);
(*AKA_VECTOR_INIT_root_0).left = AKA_VECTOR_INIT_root_0_DOT_left[0];
/* PointerStructureDataNode right */
std::vector<TreeNode*> AKA_VECTOR_INIT_root_0_DOT_right;
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int root0_right0_x=47963339;
/* PointerStructureDataNode left */
TreeNode* root0_right0_left;
/* PointerStructureDataNode right */
TreeNode* root0_right0_right;
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_0\\root\\right\\right[0]\\right\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_root_0_DOT_right_0 = new ::TreeNode(root0_right0_x,root0_right0_left,root0_right0_right);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_0_DOT_right_0).val=1850904513;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_0_DOT_right_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_root_0_DOT_right_0).right;
AKA_VECTOR_INIT_root_0_DOT_right.push_back(AKA_VECTOR_INIT_root_0_DOT_right_0);
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int root0_right1_x=1031699582;
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int)|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_0\\root\\right\\right[1]\\right\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_root_0_DOT_right_1 = new ::TreeNode(root0_right1_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_0_DOT_right_1).val=-1372344667;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_0_DOT_right_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_root_0_DOT_right_1).right;
AKA_VECTOR_INIT_root_0_DOT_right.push_back(AKA_VECTOR_INIT_root_0_DOT_right_1);
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode()|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_0\\root\\right\\right[2]\\right\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_root_0_DOT_right_2 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_0_DOT_right_2).val=1606556465;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_0_DOT_right_2).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_root_0_DOT_right_2).right;
AKA_VECTOR_INIT_root_0_DOT_right.push_back(AKA_VECTOR_INIT_root_0_DOT_right_2);
(*AKA_VECTOR_INIT_root_0).right = AKA_VECTOR_INIT_root_0_DOT_right[0];

AKA_VECTOR_INIT_root.push_back(AKA_VECTOR_INIT_root_0);


/* SubStructDataNode root */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int root1_x=2060111470;
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int)|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_1\\root\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_root_1 = new ::TreeNode(root1_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_1).val=-1892248012;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_1).left;
/* PointerStructureDataNode right */
std::vector<TreeNode*> AKA_VECTOR_INIT_root_1_DOT_right;
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int root1_right0_x=-1214739310;
/* PointerStructureDataNode left */
TreeNode* root1_right0_left;
/* PointerStructureDataNode right */
TreeNode* root1_right0_right;
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_1\\root\\right\\right[0]\\right\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_root_1_DOT_right_0 = new ::TreeNode(root1_right0_x,root1_right0_left,root1_right0_right);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_1_DOT_right_0).val=579259155;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_1_DOT_right_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_root_1_DOT_right_0).right;
AKA_VECTOR_INIT_root_1_DOT_right.push_back(AKA_VECTOR_INIT_root_1_DOT_right_0);
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode()|ROOT\\1026-maximum-difference-between-node-and-ancestor.cpp\\findMinMax(TreeNode*,TreeNode*,int&,int&)\\root\\AKA_VECTOR_INIT_root_1\\root\\right\\right[1]\\right\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_root_1_DOT_right_1 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_root_1_DOT_right_1).val=-1492927547;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_root_1_DOT_right_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_root_1_DOT_right_1).right;
AKA_VECTOR_INIT_root_1_DOT_right.push_back(AKA_VECTOR_INIT_root_1_DOT_right_1);
(*AKA_VECTOR_INIT_root_1).right = AKA_VECTOR_INIT_root_1_DOT_right[0];

AKA_VECTOR_INIT_root.push_back(AKA_VECTOR_INIT_root_1);

TreeNode* root = AKA_VECTOR_INIT_root[0];
TreeNode* node;


int mini=-172344540;


int maxi=174356011;

/* RootDataNode STATIC */
/* PointerStructureDataNode root */
/* PointerStructureDataNode node */
/* NormalNumberDataNode mini */
/* NormalNumberDataNode maxi */



AKA_mark("<<PRE-CALLING>> Test Solution_findMinMax_TreeNodemul_TreeNodemul_int_int_random_3");AKA_INSTANCE___Solution->findMinMax(root,node,mini,maxi);
AKA_fCall++;AKA_mark("Return from: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");

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
	AKA_run_test("SOLUTION_FINDMINMAX_TREENODEMUL_TREENODEMUL_INT_INT_RANDOM_3", &AKA_TEST_Solution_findMinMax_TreeNodemul_TreeNodemul_int_int_random_3, 1);


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
