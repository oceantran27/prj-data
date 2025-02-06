#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/delete-node-in-a-linked-list/
// Author: github.com/lzl124631x
// Time: O(1)
// Space: O(1)
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        auto del = node->next;
        node->next = del->next;
        delete(del);
    }
};