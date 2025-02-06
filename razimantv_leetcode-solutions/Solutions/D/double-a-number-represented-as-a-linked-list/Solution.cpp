#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/

class Solution {
 public:
  int work(ListNode* n) {
    int carry{};
    if (n->next) carry = work(n->next);
    n->val = n->val * 2 + carry;
    int ret = n->val / 10;
    n->val %= 10;
    return ret;
  }
  ListNode* doubleIt(ListNode* head) {
    ListNode* dummy = new ListNode(0, head);
    work(dummy);
    return dummy->val ? dummy : head;
  }
};
