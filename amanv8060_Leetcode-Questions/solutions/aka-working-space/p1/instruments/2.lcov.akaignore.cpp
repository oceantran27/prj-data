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
  ListNode(int x) : val(x), next(NULL) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
  ListNode() : val(0), next(NULL) {
AKA_fCall++; /* LCOV_EXCL_LINE */ } // Thêm constructor mặc định
};

class Solution {
 public:
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    ListNode* curr = new ListNode();
    ListNode* temp = curr;

    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry) {
      int sum = 0;
      if (l1 != NULL) {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2 != NULL) {
        sum += l2->val;
        l2 = l2->next;
      }
      sum += carry;
      carry = sum / 10;
      ListNode* node = new ListNode(sum % 10);
      temp->next = node;
      temp = temp->next;
    }

    return curr->next;
  }
};

#endif
