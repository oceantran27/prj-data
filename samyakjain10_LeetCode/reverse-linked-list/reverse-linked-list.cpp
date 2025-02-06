#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

 ListNode* reverseList(ListNode* head) {        
        ListNode *prev=NULL,*curr=head,*newcurr;
        while(curr)
        {
            newcurr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newcurr;
        }
        return prev;
        
    }
