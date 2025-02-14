/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_CPP
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
    
    // Using Sentinel Head
    
    ListNode* deleteDuplicates(ListNode* head) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 

        if(head == NULL)                            return NULL;

        ListNode* sentinel = new ListNode(0);
        sentinel->next = head;

        ListNode* temp = head, *prev = sentinel;

        while(temp != NULL) {
            
            if(temp->next != NULL && temp->val == temp->next->val) {
                
                // Move till the end of duplicates sublist
                while(temp->next != NULL && temp->val == temp->next->val) {
                    temp = temp->next;
                }
                
                // Skip all duplicates
                prev->next = temp->next;
            }
            else {
                prev = prev->next;
            }   

            temp = temp->next;
        }

        return sentinel->next;
    }

};
#endif
