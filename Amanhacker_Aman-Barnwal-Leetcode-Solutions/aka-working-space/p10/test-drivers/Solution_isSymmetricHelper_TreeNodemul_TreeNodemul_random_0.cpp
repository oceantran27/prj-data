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

#define AKA_TEST_PATH_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p10\\test-paths\\Solution_isSymmetricHelper_TreeNodemul_TreeNodemul_random_0.tp"

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

#define AKA_EXEC_TRACE_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p10\\execution-results\\Solution_isSymmetricHelper_TreeNodemul_TreeNodemul_random_0.trc"

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
#include "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p10\\instruments\101-symmetric-tree\101-symmetric-tree.akaignore.cpp"
/** Guard statement to avoid multiple declaration */
#ifndef AKA_GLOBAL_AKA_INSTANCE___Solution
#define AKA_GLOBAL_AKA_INSTANCE___Solution
::Solution* AKA_INSTANCE___Solution;
#endif


using namespace std;

////////////////////////////////////////
//  BEGIN TEST SCRIPTS SECTION        //
////////////////////////////////////////

void AKA_TEST_Solution_isSymmetricHelper_TreeNodemul_TreeNodemul_random_0(void) {
{
AKA_test_case_name="Solution_isSymmetricHelper_TreeNodemul_TreeNodemul_random_0";

// set up
;


/* SubClassDataNode AKA_INSTANCE___Solution */
/* ConstructorDataNode Solution() */
AKA_mark("Calling: \\Solution()|ROOT\\101-symmetric-tree.cpp\\GLOBAL\\AKA_INSTANCE___Solution\\AKA_INSTANCE___Solution\\Solution()");AKA_fCall++;AKA_INSTANCE___Solution = new ::Solution();


std::vector<TreeNode*> AKA_VECTOR_INIT_node1;


/* SubStructDataNode node1 */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_0\\node1\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node1_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_0).val=100211214;
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_node1_0_DOT_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_0\\node1\\left\\left[0]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node1_0_DOT_left_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_0_DOT_left_0).val=1529800101;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_0_DOT_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_0_DOT_left_0).right;
AKA_VECTOR_INIT_node1_0_DOT_left.push_back(AKA_VECTOR_INIT_node1_0_DOT_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int node10_left1_x=6424022;
/* PointerStructureDataNode left */
TreeNode* node10_left1_left;
/* PointerStructureDataNode right */
TreeNode* node10_left1_right;
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_0\\node1\\left\\left[1]\\left\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_node1_0_DOT_left_1 = new ::TreeNode(node10_left1_x,node10_left1_left,node10_left1_right);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_0_DOT_left_1).val=417310960;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_0_DOT_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_0_DOT_left_1).right;
AKA_VECTOR_INIT_node1_0_DOT_left.push_back(AKA_VECTOR_INIT_node1_0_DOT_left_1);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int node10_left2_x=2044742348;
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int)|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_0\\node1\\left\\left[2]\\left\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_node1_0_DOT_left_2 = new ::TreeNode(node10_left2_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_0_DOT_left_2).val=-1824772551;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_0_DOT_left_2).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_0_DOT_left_2).right;
AKA_VECTOR_INIT_node1_0_DOT_left.push_back(AKA_VECTOR_INIT_node1_0_DOT_left_2);
(*AKA_VECTOR_INIT_node1_0).left = AKA_VECTOR_INIT_node1_0_DOT_left[0];
/* PointerStructureDataNode right */
std::vector<TreeNode*> AKA_VECTOR_INIT_node1_0_DOT_right;
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_0\\node1\\right\\right[0]\\right\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node1_0_DOT_right_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_0_DOT_right_0).val=-518611379;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_0_DOT_right_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_0_DOT_right_0).right;
AKA_VECTOR_INIT_node1_0_DOT_right.push_back(AKA_VECTOR_INIT_node1_0_DOT_right_0);
(*AKA_VECTOR_INIT_node1_0).right = AKA_VECTOR_INIT_node1_0_DOT_right[0];

AKA_VECTOR_INIT_node1.push_back(AKA_VECTOR_INIT_node1_0);


/* SubStructDataNode node1 */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int node11_x=1558208752;
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_node11_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_1\\node1\\TreeNode(int,TreeNode*,TreeNode*)\\left\\left[0]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node11_left_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node11_left_0).val=275499836;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node11_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node11_left_0).right;
AKA_VECTOR_INIT_node11_left.push_back(AKA_VECTOR_INIT_node11_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_1\\node1\\TreeNode(int,TreeNode*,TreeNode*)\\left\\left[1]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node11_left_1 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node11_left_1).val=-1170478556;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node11_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node11_left_1).right;
AKA_VECTOR_INIT_node11_left.push_back(AKA_VECTOR_INIT_node11_left_1);
TreeNode* node11_left = AKA_VECTOR_INIT_node11_left[0];
/* PointerStructureDataNode right */
TreeNode* node11_right;
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_1\\node1\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_node1_1 = new ::TreeNode(node11_x,node11_left,node11_right);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_1).val=-961903844;
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_node1_1_DOT_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_1\\node1\\left\\left[0]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node1_1_DOT_left_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_1_DOT_left_0).val=275499836;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_1_DOT_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_1_DOT_left_0).right;
AKA_VECTOR_INIT_node1_1_DOT_left.push_back(AKA_VECTOR_INIT_node1_1_DOT_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_1\\node1\\left\\left[1]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node1_1_DOT_left_1 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_1_DOT_left_1).val=-1170478556;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_1_DOT_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_1_DOT_left_1).right;
AKA_VECTOR_INIT_node1_1_DOT_left.push_back(AKA_VECTOR_INIT_node1_1_DOT_left_1);
(*AKA_VECTOR_INIT_node1_1).left = AKA_VECTOR_INIT_node1_1_DOT_left[0];
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_1).right;

AKA_VECTOR_INIT_node1.push_back(AKA_VECTOR_INIT_node1_1);


/* SubStructDataNode node1 */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_2\\node1\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node1_2 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_2).val=-220601179;
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_node1_2_DOT_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int node12_left0_x=231733113;
/* PointerStructureDataNode left */
TreeNode* node12_left0_left;
/* PointerStructureDataNode right */
TreeNode* node12_left0_right;
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_2\\node1\\left\\left[0]\\left\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_node1_2_DOT_left_0 = new ::TreeNode(node12_left0_x,node12_left0_left,node12_left0_right);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_2_DOT_left_0).val=1449348417;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_2_DOT_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_2_DOT_left_0).right;
AKA_VECTOR_INIT_node1_2_DOT_left.push_back(AKA_VECTOR_INIT_node1_2_DOT_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int node12_left1_x=-398735809;
/* PointerStructureDataNode left */
TreeNode* node12_left1_left;
/* PointerStructureDataNode right */
TreeNode* node12_left1_right;
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_2\\node1\\left\\left[1]\\left\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_node1_2_DOT_left_1 = new ::TreeNode(node12_left1_x,node12_left1_left,node12_left1_right);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_2_DOT_left_1).val=500028072;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_2_DOT_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_2_DOT_left_1).right;
AKA_VECTOR_INIT_node1_2_DOT_left.push_back(AKA_VECTOR_INIT_node1_2_DOT_left_1);
(*AKA_VECTOR_INIT_node1_2).left = AKA_VECTOR_INIT_node1_2_DOT_left[0];
/* PointerStructureDataNode right */
std::vector<TreeNode*> AKA_VECTOR_INIT_node1_2_DOT_right;
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node1\\AKA_VECTOR_INIT_node1_2\\node1\\right\\right[0]\\right\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node1_2_DOT_right_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node1_2_DOT_right_0).val=814705821;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node1_2_DOT_right_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node1_2_DOT_right_0).right;
AKA_VECTOR_INIT_node1_2_DOT_right.push_back(AKA_VECTOR_INIT_node1_2_DOT_right_0);
(*AKA_VECTOR_INIT_node1_2).right = AKA_VECTOR_INIT_node1_2_DOT_right[0];

AKA_VECTOR_INIT_node1.push_back(AKA_VECTOR_INIT_node1_2);

TreeNode* node1 = AKA_VECTOR_INIT_node1[0];
std::vector<TreeNode*> AKA_VECTOR_INIT_node2;


/* SubStructDataNode node2 */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node2\\AKA_VECTOR_INIT_node2_0\\node2\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node2_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node2_0).val=2059988916;
/* PointerStructureDataNode left */
std::vector<TreeNode*> AKA_VECTOR_INIT_node2_0_DOT_left;
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node2\\AKA_VECTOR_INIT_node2_0\\node2\\left\\left[0]\\left\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node2_0_DOT_left_0 = new ::TreeNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node2_0_DOT_left_0).val=1505309900;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node2_0_DOT_left_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node2_0_DOT_left_0).right;
AKA_VECTOR_INIT_node2_0_DOT_left.push_back(AKA_VECTOR_INIT_node2_0_DOT_left_0);
/* SubStructDataNode left */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int node20_left1_x=-1570765726;
AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int)|ROOT\\101-symmetric-tree.cpp\\isSymmetricHelper(TreeNode*,TreeNode*)\\node2\\AKA_VECTOR_INIT_node2_0\\node2\\left\\left[1]\\left\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_node2_0_DOT_left_1 = new ::TreeNode(node20_left1_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_node2_0_DOT_left_1).val=-1785639698;
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node2_0_DOT_left_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node2_0_DOT_left_1).right;
AKA_VECTOR_INIT_node2_0_DOT_left.push_back(AKA_VECTOR_INIT_node2_0_DOT_left_1);
(*AKA_VECTOR_INIT_node2_0).left = AKA_VECTOR_INIT_node2_0_DOT_left[0];
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node2_0).right;

AKA_VECTOR_INIT_node2.push_back(AKA_VECTOR_INIT_node2_0);

TreeNode* node2 = AKA_VECTOR_INIT_node2[0];


bool AKA_EXPECTED_OUTPUT;

/* RootDataNode STATIC */
/* PointerStructureDataNode node1 */
/* PointerStructureDataNode node2 */
/* NormalNumberDataNode RETURN */



AKA_mark("<<PRE-CALLING>> Test Solution_isSymmetricHelper_TreeNodemul_TreeNodemul_random_0");bool AKA_ACTUAL_OUTPUT=AKA_INSTANCE___Solution->isSymmetricHelper(node1,node2);
AKA_fCall++;AKA_mark("Return from: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)");




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
	AKA_run_test("SOLUTION_ISSYMMETRICHELPER_TREENODEMUL_TREENODEMUL_RANDOM_0", &AKA_TEST_Solution_isSymmetricHelper_TreeNodemul_TreeNodemul_random_0, 1);


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
