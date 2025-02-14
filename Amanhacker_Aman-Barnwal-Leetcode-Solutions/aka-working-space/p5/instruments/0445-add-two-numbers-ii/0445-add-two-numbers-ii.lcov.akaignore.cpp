/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0445_ADD_TWO_NUMBERS_II_0445_ADD_TWO_NUMBERS_II_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0445_ADD_TWO_NUMBERS_II_0445_ADD_TWO_NUMBERS_II_CPP
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
    
    void addNodeAtBeginning(ListNode** head, int val) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 

        ListNode* first = new ListNode(val);

        if(*head == NULL) {
            *head = first;
            return;
        }

        first->next = *head;
        *head = first;

        return;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 

        ListNode* head = NULL;
        
        // Reverse both Linked Lists

        ListNode* cur1 = l1, *cur2 = l2;
        ListNode* prev = NULL, *next = NULL;

        while(cur1 != NULL) {
            
            next = cur1->next;
            cur1->next = prev;

            prev = cur1;
            cur1 = next;
        }

        l1 = prev;

        prev = NULL;
        next = NULL;

        while(cur2 != NULL) {
            
            next = cur2->next;
            cur2->next = prev;

            prev = cur2;
            cur2 = next;
        }

        l2 = prev;

        // Now, add two linked Lists
        int carry = 0;

        while(l1 != NULL && l2 != NULL) {
            
            int sum = l1->val + l2->val + carry;

            if(sum <= 9) {
                addNodeAtBeginning(&head, sum);
                cout << sum << " ";
                carry = 0;
            }

            else {
                addNodeAtBeginning(&head, sum % 10);
                cout << sum % 10 << " ";
                carry = sum / 10;
            }

            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != NULL) {
            
            int sum = l1->val + carry;

            if(sum <= 9) {
                addNodeAtBeginning(&head, sum);
                cout << sum << " ";
                carry = 0;
            }

            else {
                addNodeAtBeginning(&head, sum % 10);
                cout << sum % 10 << " ";
                carry = sum / 10;
            }
            
            l1 = l1->next;
        }

        while(l2 != NULL) {
            
            int sum = l2->val + carry;

            if(sum <= 9) {
                addNodeAtBeginning(&head, sum);
                cout << sum << " ";
                carry = 0;
            }

            else {
                addNodeAtBeginning(&head, sum % 10);
                cout << sum % 10 << " ";
                carry = sum / 10;
            }

            l2 = l2->next;
        }

        while(carry > 0) {
            addNodeAtBeginning(&head, carry % 10);
            cout << carry % 10 << " ";
            carry /= 10;
        }

        return head;
    }

};
#endif
