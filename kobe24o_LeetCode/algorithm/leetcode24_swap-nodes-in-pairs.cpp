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
    ListNode* swapPairs(ListNode* head) {
    	if(!head || !head->next)
    		return head;
        ListNode *hn = head->next;
		head->next = swapPairs(head->next->next);
		hn->next = head;
    	return hn;
    }
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    	if(!head || !head->next)
    		return head;
        ListNode *hn = head->next, *hnn = head->next->next;
		ListNode *newHead = hn, *prev = NULL;
		while(head && hn)
		{
			if(prev)
				prev->next = hn;
			hnn = hn->next;
			hn->next = head;
			head->next = hnn;
			prev = head;
			head = head->next;
			if(head)
				hn = head->next;
			else
				hn = NULL;
		}
		return newHead;
    }
};