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
class Solution {
public:
    
    // Add Node at Beginning of Linked List
    void addNodeAtLast(ListNode** head, int val) {
        
        ListNode* temp = new ListNode(val);
        ListNode* last = *head;
        
        while(last->next != NULL) {
            last = last->next;
        }

        last->next = temp;
        return;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       ListNode* res = NULL;
        
        if(l1 == NULL && l2 == NULL)                                    return NULL;
        if(l1 == NULL)                                                  return l2;
        if(l2 == NULL)                                                  return l1;
        
        // Reverse both Linked List
        ListNode* res1 = NULL, *res2 = NULL;
        
        int carry = 0;
        int i = 0;
        
        while(l1 != NULL && l2 != NULL) {
            
            int val = l1->val + l2->val + carry;
            
            if(val >= 10) {
                carry = val / 10;
                val = val % 10;
            }
            
            else {
                carry = 0;
            }
            
            l1 = l1->next;
            l2 = l2->next;
            
            if(i == 0)                                                  res = new ListNode(val);
            else                                                        addNodeAtLast(&res, val);
            
            i++;
        }
        
        while(l1 != NULL) {
            
            int val = l1->val + carry;
            
            if(val >= 10) {
                carry = val / 10;
                val = val % 10;
            }
            
            else {
                carry = 0;
            }
            
            l1 = l1->next;
            
            if(i == 0)                                                  res = new ListNode(val);
            else                                                        addNodeAtLast(&res, val);
            
            i++;
        }
        
        while(l2 != NULL) {
            
            int val = l2->val + carry;
            
            if(val >= 10) {
                carry = val / 10;
                val = val % 10;
            }
            
            else {
                carry = 0;
            }
            
            l2 = l2->next;
            
            if(i == 0)                                                  res = new ListNode(val);
            else                                                        addNodeAtLast(&res, val);
            
            i++;
        }
        
        if(carry > 0) {
            
            if(i == 0)                                                  res = new ListNode(carry);
            else                                                        addNodeAtLast(&res, carry);
            
            i++;
        }
        
        
        return res;
    }
    
};