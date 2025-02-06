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

// linked list
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        if (head->val >= 5) {
            head = new ListNode(0, head);
        }
        for (auto curr = head; curr; curr = curr->next) {
            curr->val = (curr->val * 2) % 10;
            if (curr->next && curr->next->val >= 5) {
                ++curr->val;
            }
        }
        return head;
    }
};
