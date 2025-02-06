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
// Space: O(m)

// hash table, linked list
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> lookup(cbegin(nums), cend(nums));
        ListNode dummy(0, head);
        for (auto curr = &dummy; curr->next;) {
            if (!lookup.count(curr->next->val)) {
                curr = curr->next;
            } else {
                auto to_del = curr->next;
                curr->next = curr->next->next;
                delete to_del;
            }
        }
        return dummy.next;
    }
};
