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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        int length=0;
        ListNode* temp=head;
        while(temp) {
            length++;
            temp=temp->next;
        }
        length = length-n;
        if(length==0) {
            temp=head->next;
            head->next=NULL;
            delete(head);
            return temp;
        }
        ListNode* prev;
        ListNode* aftr=head;
        while(length>0) {
            prev=aftr;
            aftr=aftr->next;
            length--;
        }
        prev->next=aftr->next;
        aftr->next=NULL;
        delete(aftr);
        return head;

    }
};