#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
// O(n) space with hashing
#include <unordered_set>
using std::unordered_set;
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> us;
        ListNode *ptr = headA;
        while (ptr != NULL) {
            us.insert(ptr);
            ptr = ptr->next;
        }
        ptr = headB;
        while (ptr != NULL) {
            if (us.find(ptr) != us.end()) {
                break;
            }
            us.insert(ptr);
            ptr = ptr->next;
        }
        us.clear();
        return ptr;
    }
};
