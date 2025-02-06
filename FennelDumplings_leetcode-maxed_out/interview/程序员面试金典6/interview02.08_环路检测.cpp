#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// interview02.08: 环路检测

/*
 * https://leetcode-cn.com/problems/linked-list-cycle-lcci/
 */

#include "../../include/Node.h"

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head) return nullptr;
        ListNode dummy_node(0);
        ListNode *dummy = &dummy_node;
        dummy -> next = head;
        ListNode *slow = dummy, *fast = dummy;
        while(fast -> next && fast -> next -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)
                break;
        }
        if(!fast -> next || !fast -> next -> next)
            return nullptr;
        slow = dummy;
        while(slow != fast)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        return slow;
    }
};
