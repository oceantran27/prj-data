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

#define AKA_TEST_PATH_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p8\\test-paths\\Solution_dfs_TreeNodemul_TreeNodemul_int_set_TreeNodemul_random_4.tp"

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

#define AKA_EXEC_TRACE_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p8\\execution-results\\Solution_dfs_TreeNodemul_TreeNodemul_int_set_TreeNodemul_random_4.trc"

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
#include "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p8\\instruments\0968-binary-tree-cameras\0968-binary-tree-cameras.akaignore.cpp"
/** Guard statement to avoid multiple declaration */
#ifndef AKA_GLOBAL_AKA_INSTANCE___Solution
#define AKA_GLOBAL_AKA_INSTANCE___Solution
::Solution* AKA_INSTANCE___Solution;
#endif


using namespace std;

////////////////////////////////////////
//  BEGIN TEST SCRIPTS SECTION        //
////////////////////////////////////////

void AKA_TEST_Solution_dfs_TreeNodemul_TreeNodemul_int_set_TreeNodemul_random_4(void) {
{
AKA_test_case_name="Solution_dfs_TreeNodemul_TreeNodemul_int_set_TreeNodemul_random_4";

// set up
;


/* SubClassDataNode AKA_INSTANCE___Solution */
/* ConstructorDataNode Solution() */
AKA_mark("Calling: \\Solution()|ROOT\\0968-binary-tree-cameras.cpp\\GLOBAL\\AKA_INSTANCE___Solution\\AKA_INSTANCE___Solution\\Solution()");AKA_fCall++;AKA_INSTANCE___Solution = new ::Solution();


std::vector<TreeNode*> AKA_VECTOR_INIT_node;


/* SubStructDataNode node */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int node0_x=1009936824;
AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode(int)|ROOT\\0968-binary-tree-cameras.cpp\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)\\node\\AKA_VECTOR_INIT_node_0\\node\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_node_0 = new ::TreeNode(node0_x);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node_0).left;
/* PointerStructureDataNode right */
std::vector<TreeNode*> AKA_VECTOR_INIT_node_0_DOT_right;
/* SubStructDataNode right */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode()|ROOT\\0968-binary-tree-cameras.cpp\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)\\node\\AKA_VECTOR_INIT_node_0\\node\\right\\right[0]\\right\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_node_0_DOT_right_0 = new ::TreeNode();
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node_0_DOT_right_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node_0_DOT_right_0).right;
AKA_VECTOR_INIT_node_0_DOT_right.push_back(AKA_VECTOR_INIT_node_0_DOT_right_0);
(*AKA_VECTOR_INIT_node_0).right = AKA_VECTOR_INIT_node_0_DOT_right[0];

AKA_VECTOR_INIT_node.push_back(AKA_VECTOR_INIT_node_0);


/* SubStructDataNode node */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int node1_x=939944569;
AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode(int)|ROOT\\0968-binary-tree-cameras.cpp\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)\\node\\AKA_VECTOR_INIT_node_1\\node\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_node_1 = new ::TreeNode(node1_x);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_node_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_node_1).right;

AKA_VECTOR_INIT_node.push_back(AKA_VECTOR_INIT_node_1);

TreeNode* node = AKA_VECTOR_INIT_node[0];
std::vector<TreeNode*> AKA_VECTOR_INIT_par;


/* SubStructDataNode par */
/* ConstructorDataNode TreeNode(int) */
/* NormalNumberDataNode x */
int par0_x=1885822145;
AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode(int)|ROOT\\0968-binary-tree-cameras.cpp\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)\\par\\AKA_VECTOR_INIT_par_0\\par\\TreeNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_par_0 = new ::TreeNode(par0_x);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_par_0).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_par_0).right;

AKA_VECTOR_INIT_par.push_back(AKA_VECTOR_INIT_par_0);


/* SubStructDataNode par */
/* ConstructorDataNode TreeNode(int,TreeNode*,TreeNode*) */
/* NormalNumberDataNode x */
int par1_x=0;
/* PointerStructureDataNode left */
TreeNode* par1_left;
/* PointerStructureDataNode right */
TreeNode* par1_right;
AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)|ROOT\\0968-binary-tree-cameras.cpp\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)\\par\\AKA_VECTOR_INIT_par_1\\par\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_par_1 = new ::TreeNode(par1_x,par1_left,par1_right);
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_par_1).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_par_1).right;

AKA_VECTOR_INIT_par.push_back(AKA_VECTOR_INIT_par_1);


/* SubStructDataNode par */
/* ConstructorDataNode TreeNode() */
AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode()|ROOT\\0968-binary-tree-cameras.cpp\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)\\par\\AKA_VECTOR_INIT_par_2\\par\\TreeNode()");AKA_fCall++;auto AKA_VECTOR_INIT_par_2 = new ::TreeNode();
/* NormalNumberDataNode val */
/* val : null value -> no code */
/* PointerStructureDataNode left */
(*AKA_VECTOR_INIT_par_2).left;
/* PointerStructureDataNode right */
(*AKA_VECTOR_INIT_par_2).right;

AKA_VECTOR_INIT_par.push_back(AKA_VECTOR_INIT_par_2);

TreeNode* par = AKA_VECTOR_INIT_par[0];


int camCount=-818387996;
set<TreeNode*> covered;

/* RootDataNode STATIC */
/* PointerStructureDataNode node */
/* PointerStructureDataNode par */
/* NormalNumberDataNode camCount */
/* SetDataNode covered */
TreeNode* covered_element0;
covered.insert(covered_element0);
TreeNode* covered_element1;
covered.insert(covered_element1);



AKA_mark("<<PRE-CALLING>> Test Solution_dfs_TreeNodemul_TreeNodemul_int_set_TreeNodemul_random_4");AKA_INSTANCE___Solution->dfs(node,par,camCount,covered);
AKA_fCall++;AKA_mark("Return from: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");

/* error assertion */
set<TreeNode*> EXPECTED_covered;



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
	AKA_run_test("SOLUTION_DFS_TREENODEMUL_TREENODEMUL_INT_SET_TREENODEMUL_RANDOM_4", &AKA_TEST_Solution_dfs_TreeNodemul_TreeNodemul_int_set_TreeNodemul_random_4, 1);


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
