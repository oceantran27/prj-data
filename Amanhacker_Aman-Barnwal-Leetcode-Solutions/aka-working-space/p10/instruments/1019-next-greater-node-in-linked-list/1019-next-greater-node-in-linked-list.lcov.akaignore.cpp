/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_CPP
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
    
    vector<int> nextLargerNodes(ListNode* head) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;
        ListNode* temp = head;
        
        vector<int> v;
        
        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        // Now, find the next greater right of all elements of vector v
        stack<int> w;
        
        for(int i=v.size()-1; i>=0; i--) {
            
            if(w.empty() == true)                                       res.push_back(0);
            else if(w.top() > v[i])                                     res.push_back(w.top());
            else if(w.top() <= v[i]) {

                while(w.empty() == false && w.top() <= v[i])            w.pop();
                
                if(w.empty() == true)                                   res.push_back(0);
                else                                                    res.push_back(w.top());
            }
            
            w.push(v[i]);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
};
#endif
