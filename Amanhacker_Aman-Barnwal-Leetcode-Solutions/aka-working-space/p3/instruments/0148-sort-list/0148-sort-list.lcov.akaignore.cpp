/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0148_SORT_LIST_0148_SORT_LIST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0148_SORT_LIST_0148_SORT_LIST_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
     ListNode(int x) : val(x), next(nullptr) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
     ListNode(int x, ListNode *next) : val(x), next(next) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
 };

class Solution {
public:
public:
    
    // With O(1) space complexity

    void mergeList(ListNode* l1, ListNode* l2, ListNode** head) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        ListNode* ptr = new ListNode(0);
        ListNode* cur = ptr;

        while(l1 != NULL && l2 != NULL) {

            if(l1->val <= l2->val) {
                cur->next = l1;
                l1 = l1->next;
            }
            else {
                cur->next = l2;
                l2 = l2->next;
            }

            cur = cur->next;
        }

        if(l1 != NULL) {

            cur->next = l1;
            l1 = l1->next;
        }

        if(l2 != NULL) {

            cur->next = l2;
            l2 = l2->next;
        }

        *head = ptr->next;
        return;
    }

    ListNode* sortList(ListNode* head) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 

        ListNode* newHead = NULL;   

        if(head == NULL || head->next == NULL)                     return head; 

        // Find the middle node of the Linked List
        ListNode* slow = head, *fast = head, *temp;

        while(fast != NULL && fast->next != NULL) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp->next = NULL;      // End of 1st list

        // Here, slow is the middle node

        ListNode* l1 = sortList(head);    //    left half recursive call
        ListNode* l2 = sortList(slow);    //    right half recursive call

        mergeList(l1, l2, &newHead);

        return newHead;
    }

};
#endif
