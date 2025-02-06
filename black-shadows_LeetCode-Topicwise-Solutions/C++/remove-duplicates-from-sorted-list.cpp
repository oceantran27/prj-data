#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

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
    ListNode* deleteDuplicates(ListNode* head) {
        auto iter = head;
        while (iter) {
            auto runner = iter->next;
            while (runner && runner->val == iter->val) {
                runner = runner->next;
            }
            iter->next = runner;
            iter = runner;
        }
        return head; 
    }
};
