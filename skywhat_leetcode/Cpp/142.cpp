#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Given a linked list, return the node where the cycle begins. If there is no
cycle, return null.

Note: Do not modify the linked list.

Follow up:
Can you solve it without using extra space?
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                while (head != slow) {
                    head = head->next;
                    slow = slow->next;
                }
                return head;
            }
        }

        return nullptr;
    }
};
