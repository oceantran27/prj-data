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
    ListNode* removeElements(ListNode* head, int val) {
    	ListNode *emptyHead = new ListNode(-1);
    	emptyHead->next = head;
        ListNode *cur = head, *prev = emptyHead;
        while(cur != NULL)
        {
        	if(cur->val == val)
        	{
        		prev->next = cur->next;
        		cur = prev->next;
        	}
        	else
        	{
        		cur = cur->next;
        		prev = prev->next;
        	}
        }
        return emptyHead->next;
    }
};