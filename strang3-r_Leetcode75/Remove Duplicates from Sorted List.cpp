#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
      
        ListNode* tmp = head;
        ListNode* curr = head->next;
       
        while(curr!=NULL) {
            
            if(tmp->val == curr->val) {
               
                curr=curr->next;
            }
           
            else {
                tmp->next = curr;
                tmp = curr;
                curr = tmp->next;
            }
        }
        tmp->next = NULL;
        return head;       
    }
};
