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

class Solution {
public:
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
        unordered_map<int, int> count;
        for (auto curr = head; curr; curr = curr->next) {
            ++count[curr->val];
        }
        ListNode dummy(0, head);
        for (auto curr = &dummy; curr->next;) {
            if (count[curr->next->val] == 1) {
                curr = curr->next;
            } else {
                curr->next = curr->next->next;
            }
        }
        return dummy.next;
    }
};
