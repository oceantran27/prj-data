#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/insertion-sort-list

class Solution {
 public:
  ListNode *insertionSortList(ListNode *head) {
    if (head == nullptr or head->next == nullptr) return head;
    ListNode *dummy = new ListNode;
    for (ListNode *cur = head; cur != nullptr;) {
      for (ListNode *cur2 = dummy;; cur2 = cur2->next) {
        if (cur2->next == nullptr or cur2->next->val > cur->val) {
          swap(cur->next, cur2->next);
          swap(cur, cur2->next);
          break;
        }
      }
    }
    return dummy->next;
  }
};
