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
// Space: O(n)

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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> result;
        vector<pair<int, int>> stk;
        for (auto node = head; node; node = node->next) {
            while (!stk.empty() && stk.back().second < node->val) {
                result[stk.back().first] = node->val;
                stk.pop_back();
            }
            stk.emplace_back(result.size(), node->val);
            result.emplace_back(0);
        }
        return result;
    }
};
