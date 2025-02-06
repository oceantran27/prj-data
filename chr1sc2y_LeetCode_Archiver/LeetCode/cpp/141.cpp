#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;
        auto slow = head->next, fast = head->next->next;
        while (fast && fast->next && fast != slow) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow == fast;
    }
};
