#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

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
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set<int> table;
        for (int i : G) {
            table.insert(i);
        }
        ListNode* curr = head;
        int count = 0;
        while (curr) {
            if (table.count(curr->val) && (curr->next == nullptr || !table.count(curr->next->val))) {
                ++count;
            }
            curr = curr->next;
        }
        
        return count;
    }
};
