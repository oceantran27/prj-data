#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        
        while(head!=NULL)
        {
            bool f=false;
            while(head->next!=NULL && head->val==head->next->val){
                head=head->next;
                f=true;
            }                
            if(!f){
                temp->next=new ListNode(head->val);
                temp=temp->next;
            }
            head=head->next;
        }
        return ans->next;
    }
