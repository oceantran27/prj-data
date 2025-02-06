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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        int count = m;
        ListNode* cur = head, *tail = NULL;
        while(cur)
        {
        	count = m;
        	while(cur && count--)
        	{
        		tail = cur;
        		cur = cur->next;
        	}
        	count = n;
        	while(cur && count--)
        	{
        		cur = cur->next;
        	}
        	tail->next = cur;
        }
        tail->next = NULL;
        return head;
    }
};