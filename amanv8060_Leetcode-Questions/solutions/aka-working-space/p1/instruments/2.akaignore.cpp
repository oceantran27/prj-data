/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_2_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_2_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Định nghĩa ListNode
struct ListNode {
  int val;
  ListNode* next;
  /** Instrumented function ListNode(int) */
ListNode(int x) : val(x), next(NULL) /* << Aka begin of function  ListNode(int x) >> */
{AKA_mark("Calling: .\\p1\\2.cpp\\ListNode\\ListNode(int)");AKA_fCall++;}
  /** Instrumented function ListNode() */
ListNode() : val(0), next(NULL) /* << Aka begin of function  ListNode() >> */
{AKA_mark("Calling: .\\p1\\2.cpp\\ListNode\\ListNode()");AKA_fCall++;} // Thêm constructor mặc định
};

class Solution {
 public:
public:
  /** Instrumented function addTwoNumbers(ListNode*,ListNode*) */
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) /* << Aka begin of function ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) >> */
{AKA_mark("Calling: .\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");AKA_fCall++;
    AKA_mark("lis===17###sois===365###eois===397###lif===1###soif===59###eoif===91###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");ListNode* curr = new ListNode();
    AKA_mark("lis===18###sois===403###eois===425###lif===2###soif===97###eoif===119###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");ListNode* temp = curr;

    AKA_mark("lis===20###sois===433###eois===447###lif===4###soif===127###eoif===141###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");int carry = 0;

    int AKA_BLOCK_LOOP_455 = 0;
    while (AKA_mark("lis===22###sois===462###eois===495###lif===6###soif===156###eoif===189###ifc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (((AKA_mark("lis===22###sois===462###eois===472###lif===6###soif===156###eoif===166###isc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l1 != NULL)) || (AKA_mark("lis===22###sois===476###eois===486###lif===6###soif===170###eoif===180###isc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l2 != NULL))) || (AKA_mark("lis===22###sois===490###eois===495###lif===6###soif===184###eoif===189###isc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (carry)))) {
        AKA_BLOCK_LOOP_455++;
        if (AKA_BLOCK_LOOP_455 > 1000) {
            //break;
        }
      AKA_mark("lis===23###sois===506###eois===518###lif===7###soif===200###eoif===212###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");int sum = 0;
      if (AKA_mark("lis===24###sois===530###eois===540###lif===8###soif===224###eoif===234###ifc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===24###sois===530###eois===540###lif===8###soif===224###eoif===234###isc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l1 != NULL))) {
        AKA_mark("lis===25###sois===553###eois===568###lif===9###soif===247###eoif===262###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");sum += l1->val;
        AKA_mark("lis===26###sois===578###eois===592###lif===10###soif===272###eoif===286###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l1 = l1->next;
      }
else {
AKA_mark("lis===-24-###sois===-530-###eois===-53010-###lif===-8-###soif===-###eoif===-234-###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");
}
      if (AKA_mark("lis===28###sois===613###eois===623###lif===12###soif===307###eoif===317###ifc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===28###sois===613###eois===623###lif===12###soif===307###eoif===317###isc===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l2 != NULL))) {
        AKA_mark("lis===29###sois===636###eois===651###lif===13###soif===330###eoif===345###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");sum += l2->val;
        AKA_mark("lis===30###sois===661###eois===675###lif===14###soif===355###eoif===369###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l2 = l2->next;
      }
else {
AKA_mark("lis===-28-###sois===-613-###eois===-61310-###lif===-12-###soif===-###eoif===-317-###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");
}
      AKA_mark("lis===32###sois===692###eois===705###lif===16###soif===386###eoif===399###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");sum += carry;
      AKA_mark("lis===33###sois===713###eois===730###lif===17###soif===407###eoif===424###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry = sum / 10;
      AKA_mark("lis===34###sois===738###eois===778###lif===18###soif===432###eoif===472###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");ListNode* node = new ListNode(sum % 10);
      AKA_mark("lis===35###sois===786###eois===804###lif===19###soif===480###eoif===498###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");temp->next = node;
      AKA_mark("lis===36###sois===812###eois===830###lif===20###soif===506###eoif===524###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");temp = temp->next;
    }

    AKA_mark("lis===39###sois===845###eois===863###lif===23###soif===539###eoif===557###ins===true###function===.\\p1\\2.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");return curr->next;
  }
};

#endif
