#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/add-two-numbers-ii

class Solution {
 public:
  typedef ListNode LN;
  pair<LN*, LN*> rev(LN* l) {
    if (l->next == nullptr) return {l, l};
    auto [h, t] = rev(l->next);
    t->next = l;
    l->next = nullptr;
    return {h, l};
  }
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    tie(l1, ignore) = rev(l1);
    tie(l2, ignore) = rev(l2);

    LN *ret = new LN, *cur = ret;
    for (int carry = 0; carry or l1 != nullptr or l2 != nullptr;) {
      cur->next = new LN(carry);
      cur = cur->next;
      if (l1 != nullptr) cur->val += l1->val, l1 = l1->next;
      if (l2 != nullptr) cur->val += l2->val, l2 = l2->next;
      if (cur->val > 9)
        cur->val -= 10, carry = 1;
      else
        carry = 0;
    }
    tie(ret, ignore) = rev(ret->next);
    return ret;
  }
};
