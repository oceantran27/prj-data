/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0086_PARTITION_LIST_0086_PARTITION_LIST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0086_PARTITION_LIST_0086_PARTITION_LIST_CPP
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
    
    ListNode* partition(ListNode* head, int x) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        // Create two nodes with garbage vales.

        // small -> to have nodes with value less than key
        // large -> to have nodes with value greater than or equal to key.

        ListNode* small = new ListNode(-1);
        ListNode* large = new ListNode(-1);

        // Now visit each node :

        // if node smaller -> add to small and small -> next = NULL
        // else -> add to large and large -> next = NULL

        ListNode *smallHead = small, *largeHead = large;

        while(head != NULL) {

            if(head->val < x) {
                
                small->next = head;
                small = small->next;
                
                head = head->next;
                small->next = NULL;
            }

            else {

                large->next = head;
                large = large->next;
                
                head = head->next;
                large->next = NULL;
            }
        }

        // At end, Join two Linked Lists [Remember the garbage nodes]

        // Make small->next = largeHead -> next : we appending largeHead -> next because the first node is garbage.

        small->next = largeHead->next;
        return smallHead->next;
    }
    
};
#endif
