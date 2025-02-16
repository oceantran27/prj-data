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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    
    bool hasCycle(ListNode *head) {
    
        set<ListNode*> w;
        
        if(head == NULL)                        return false;
        
        w.insert(head);
        
        while(head->next != NULL) {
            
            if(w.find(head->next) != w.end())   return true;
            
            w.insert(head->next);
            head = head->next;
        }
        
        return false;
    }
    
};