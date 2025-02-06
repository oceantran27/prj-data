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
    	if(!head || !head->next)
    		return head;
        ListNode *cur = head, *nt = head->next;
        while(nt)
        {
        	if(cur->val == nt->val)
        		nt = nt->next;
        	else
        	{
        		cur->next = nt;
        		cur = nt;
        		nt = nt->next;
        	}
        }
        cur->next = NULL;
        return head;
    }
};