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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *fast = head, *slow = head;
        while(k--)
        	fast = fast->next;
        while(fast)
        {
        	fast = fast->next;
        	slow = slow->next;
        }
        return slow;
    }
};