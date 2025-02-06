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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
        	return true;
        ListNode *fast = head, *slow = head, *prev = NULL, *nextNode;
        while(fast && fast->next)
        {
        	fast = fast->next->next;
        	nextNode = slow->next;
        	slow->next = prev;
        	prev = slow;
        	slow = nextNode;
        }
        if(fast != NULL)//奇数个节点情况
        	slow = slow->next;
        while(slow)
        {
        	if(prev->val != slow->val)
        		return false;
        	prev = prev->next;
        	slow = slow->next;
        }
        return true;
    }
};