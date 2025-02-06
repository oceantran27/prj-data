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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        for (auto curr = head; curr->next; curr = curr->next->next) {
            curr->next = new ListNode(gcd(curr->val, curr->next->val), curr->next);
        }
        return head;
    }
};
