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

#define AKA_TEST_PATH_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p3\\test-paths\\Solution_mergeList_ListNodemul_ListNodemul_ListNodemulmul_random_0.tp"

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

#define AKA_EXEC_TRACE_FILE "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p3\\execution-results\\Solution_mergeList_ListNodemul_ListNodemul_ListNodemulmul_random_0.trc"

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
#include "D:\\Projects\\AKAUT\\prj-data\\Amanhacker_Aman-Barnwal-Leetcode-Solutions\\aka-working-space\\p3\\instruments\0148-sort-list\0148-sort-list.akaignore.cpp"
/** Guard statement to avoid multiple declaration */
#ifndef AKA_GLOBAL_AKA_INSTANCE___Solution
#define AKA_GLOBAL_AKA_INSTANCE___Solution
::Solution* AKA_INSTANCE___Solution;
#endif


using namespace std;

////////////////////////////////////////
//  BEGIN TEST SCRIPTS SECTION        //
////////////////////////////////////////

void AKA_TEST_Solution_mergeList_ListNodemul_ListNodemul_ListNodemulmul_random_0(void) {
{
AKA_test_case_name="Solution_mergeList_ListNodemul_ListNodemul_ListNodemulmul_random_0";

// set up
;


/* SubClassDataNode AKA_INSTANCE___Solution */
/* ConstructorDataNode Solution() */
AKA_mark("Calling: \\Solution()|ROOT\\0148-sort-list.cpp\\GLOBAL\\AKA_INSTANCE___Solution\\AKA_INSTANCE___Solution\\Solution()");AKA_fCall++;AKA_INSTANCE___Solution = new ::Solution();


std::vector<ListNode*> AKA_VECTOR_INIT_l1;


/* SubStructDataNode l1 */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l10_x=800584316;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l1\\AKA_VECTOR_INIT_l1_0\\l1\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l1_0 = new ::ListNode(l10_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l1_0).val=-1439847849;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l1_0).next;

AKA_VECTOR_INIT_l1.push_back(AKA_VECTOR_INIT_l1_0);


/* SubStructDataNode l1 */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode()|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l1\\AKA_VECTOR_INIT_l1_1\\l1\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_l1_1 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l1_1).val=-177700363;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l1_1_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l11_next0_x=-469197862;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l1\\AKA_VECTOR_INIT_l1_1\\l1\\next\\next[0]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l1_1_DOT_next_0 = new ::ListNode(l11_next0_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l1_1_DOT_next_0).val=-1800999836;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l1_1_DOT_next_0).next;
AKA_VECTOR_INIT_l1_1_DOT_next.push_back(AKA_VECTOR_INIT_l1_1_DOT_next_0);
(*AKA_VECTOR_INIT_l1_1).next = AKA_VECTOR_INIT_l1_1_DOT_next[0];

AKA_VECTOR_INIT_l1.push_back(AKA_VECTOR_INIT_l1_1);

ListNode* l1 = AKA_VECTOR_INIT_l1[0];
std::vector<ListNode*> AKA_VECTOR_INIT_l2;


/* SubStructDataNode l2 */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l20_x=-1775908257;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0 = new ::ListNode(l20_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0).val=459407718;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_l2_0_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l20_next0_x=2120038599;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[0]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_0 = new ::ListNode(l20_next0_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_0).val=621739295;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_0).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int l20_next1_x=-1194594052;
/* PointerStructureDataNode next */
ListNode* l20_next1_next;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[1]\\next\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_1 = new ::ListNode(l20_next1_x,l20_next1_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_1).val=647895268;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_1).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_1);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l20_next2_x=-246391394;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l2\\AKA_VECTOR_INIT_l2_0\\l2\\next\\next[2]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_0_DOT_next_2 = new ::ListNode(l20_next2_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_0_DOT_next_2).val=-1377820073;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_0_DOT_next_2).next;
AKA_VECTOR_INIT_l2_0_DOT_next.push_back(AKA_VECTOR_INIT_l2_0_DOT_next_2);
(*AKA_VECTOR_INIT_l2_0).next = AKA_VECTOR_INIT_l2_0_DOT_next[0];

AKA_VECTOR_INIT_l2.push_back(AKA_VECTOR_INIT_l2_0);


/* SubStructDataNode l2 */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int l21_x=619443196;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\l2\\AKA_VECTOR_INIT_l2_1\\l2\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_l2_1 = new ::ListNode(l21_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_l2_1).val=-915169754;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_l2_1).next;

AKA_VECTOR_INIT_l2.push_back(AKA_VECTOR_INIT_l2_1);

ListNode* l2 = AKA_VECTOR_INIT_l2[0];
std::vector<ListNode**> AKA_VECTOR_INIT_head;
std::vector<ListNode*> AKA_VECTOR_INIT_AKA_VECTOR_INIT_head_0;


/* SubStructDataNode AKA_VECTOR_INIT_head_0_0 */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode()|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_0\\AKA_VECTOR_INIT_head_0_0\\AKA_VECTOR_INIT_head_0_0\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_head_0_0 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_0_0).val=-474296319;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_head_0_0_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int head00_next0_x=-825704223;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_0\\AKA_VECTOR_INIT_head_0_0\\AKA_VECTOR_INIT_head_0_0\\next\\next[0]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_head_0_0_DOT_next_0 = new ::ListNode(head00_next0_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_0_0_DOT_next_0).val=-1353511517;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head_0_0_DOT_next_0).next;
AKA_VECTOR_INIT_head_0_0_DOT_next.push_back(AKA_VECTOR_INIT_head_0_0_DOT_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode()|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_0\\AKA_VECTOR_INIT_head_0_0\\AKA_VECTOR_INIT_head_0_0\\next\\next[1]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_head_0_0_DOT_next_1 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_0_0_DOT_next_1).val=-1213120830;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head_0_0_DOT_next_1).next;
AKA_VECTOR_INIT_head_0_0_DOT_next.push_back(AKA_VECTOR_INIT_head_0_0_DOT_next_1);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode()|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_0\\AKA_VECTOR_INIT_head_0_0\\AKA_VECTOR_INIT_head_0_0\\next\\next[2]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_head_0_0_DOT_next_2 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_0_0_DOT_next_2).val=-116667749;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head_0_0_DOT_next_2).next;
AKA_VECTOR_INIT_head_0_0_DOT_next.push_back(AKA_VECTOR_INIT_head_0_0_DOT_next_2);
(*AKA_VECTOR_INIT_head_0_0).next = AKA_VECTOR_INIT_head_0_0_DOT_next[0];

AKA_VECTOR_INIT_AKA_VECTOR_INIT_head_0.push_back(AKA_VECTOR_INIT_head_0_0);

auto AKA_VECTOR_INIT_head_0 = &(AKA_VECTOR_INIT_AKA_VECTOR_INIT_head_0[0]);
AKA_VECTOR_INIT_head.push_back(AKA_VECTOR_INIT_head_0);
std::vector<ListNode*> AKA_VECTOR_INIT_AKA_VECTOR_INIT_head_1;


/* SubStructDataNode AKA_VECTOR_INIT_head_1_0 */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int head10_x=1376175617;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_head10_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int head10_next0_x=-365415874;
/* PointerStructureDataNode next */
ListNode* head10_next0_next;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_1\\AKA_VECTOR_INIT_head_1_0\\AKA_VECTOR_INIT_head_1_0\\ListNode(int,ListNode*)\\next\\next[0]\\next\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_head10_next_0 = new ::ListNode(head10_next0_x,head10_next0_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head10_next_0).val=-1358155406;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head10_next_0).next;
AKA_VECTOR_INIT_head10_next.push_back(AKA_VECTOR_INIT_head10_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int head10_next1_x=971478566;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_1\\AKA_VECTOR_INIT_head_1_0\\AKA_VECTOR_INIT_head_1_0\\ListNode(int,ListNode*)\\next\\next[1]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_head10_next_1 = new ::ListNode(head10_next1_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head10_next_1).val=-2047086879;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head10_next_1).next;
AKA_VECTOR_INIT_head10_next.push_back(AKA_VECTOR_INIT_head10_next_1);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode()|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_1\\AKA_VECTOR_INIT_head_1_0\\AKA_VECTOR_INIT_head_1_0\\ListNode(int,ListNode*)\\next\\next[2]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_head10_next_2 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head10_next_2).val=-361016650;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head10_next_2).next;
AKA_VECTOR_INIT_head10_next.push_back(AKA_VECTOR_INIT_head10_next_2);
ListNode* head10_next = AKA_VECTOR_INIT_head10_next[0];
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_1\\AKA_VECTOR_INIT_head_1_0\\AKA_VECTOR_INIT_head_1_0\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_head_1_0 = new ::ListNode(head10_x,head10_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_1_0).val=1871399271;
/* PointerStructureDataNode next */
std::vector<ListNode*> AKA_VECTOR_INIT_head_1_0_DOT_next;
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int,ListNode*) */
/* NormalNumberDataNode x */
int head10_next0_x=-365415874;
/* PointerStructureDataNode next */
ListNode* head10_next0_next;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int,ListNode*)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_1\\AKA_VECTOR_INIT_head_1_0\\AKA_VECTOR_INIT_head_1_0\\next\\next[0]\\next\\ListNode(int,ListNode*)");AKA_fCall++;auto AKA_VECTOR_INIT_head_1_0_DOT_next_0 = new ::ListNode(head10_next0_x,head10_next0_next);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_1_0_DOT_next_0).val=-1358155406;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head_1_0_DOT_next_0).next;
AKA_VECTOR_INIT_head_1_0_DOT_next.push_back(AKA_VECTOR_INIT_head_1_0_DOT_next_0);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode(int) */
/* NormalNumberDataNode x */
int head10_next1_x=971478566;
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_1\\AKA_VECTOR_INIT_head_1_0\\AKA_VECTOR_INIT_head_1_0\\next\\next[1]\\next\\ListNode(int)");AKA_fCall++;auto AKA_VECTOR_INIT_head_1_0_DOT_next_1 = new ::ListNode(head10_next1_x);
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_1_0_DOT_next_1).val=-2047086879;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head_1_0_DOT_next_1).next;
AKA_VECTOR_INIT_head_1_0_DOT_next.push_back(AKA_VECTOR_INIT_head_1_0_DOT_next_1);
/* SubStructDataNode next */
/* ConstructorDataNode ListNode() */
AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode()|ROOT\\0148-sort-list.cpp\\mergeList(ListNode*,ListNode*,ListNode**)\\head\\AKA_VECTOR_INIT_head_1\\AKA_VECTOR_INIT_head_1_0\\AKA_VECTOR_INIT_head_1_0\\next\\next[2]\\next\\ListNode()");AKA_fCall++;auto AKA_VECTOR_INIT_head_1_0_DOT_next_2 = new ::ListNode();
/* NormalNumberDataNode val */
(*AKA_VECTOR_INIT_head_1_0_DOT_next_2).val=-361016650;
/* PointerStructureDataNode next */
(*AKA_VECTOR_INIT_head_1_0_DOT_next_2).next;
AKA_VECTOR_INIT_head_1_0_DOT_next.push_back(AKA_VECTOR_INIT_head_1_0_DOT_next_2);
(*AKA_VECTOR_INIT_head_1_0).next = AKA_VECTOR_INIT_head_1_0_DOT_next[0];

AKA_VECTOR_INIT_AKA_VECTOR_INIT_head_1.push_back(AKA_VECTOR_INIT_head_1_0);

auto AKA_VECTOR_INIT_head_1 = &(AKA_VECTOR_INIT_AKA_VECTOR_INIT_head_1[0]);
AKA_VECTOR_INIT_head.push_back(AKA_VECTOR_INIT_head_1);

ListNode** head = AKA_VECTOR_INIT_head[0];

/* RootDataNode STATIC */
/* PointerStructureDataNode l1 */
/* PointerStructureDataNode l2 */
/* PointerStructureDataNode head */



AKA_mark("<<PRE-CALLING>> Test Solution_mergeList_ListNodemul_ListNodemul_ListNodemulmul_random_0");AKA_INSTANCE___Solution->mergeList(l1,l2,head);
AKA_fCall++;AKA_mark("Return from: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");

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
	AKA_run_test("SOLUTION_MERGELIST_LISTNODEMUL_LISTNODEMUL_LISTNODEMULMUL_RANDOM_0", &AKA_TEST_Solution_mergeList_ListNodemul_ListNodemul_ListNodemulmul_random_0, 1);


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
