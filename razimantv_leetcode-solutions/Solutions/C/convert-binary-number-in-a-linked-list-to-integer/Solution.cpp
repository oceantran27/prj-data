#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

class Solution {
 public:
  int getDecimalValue(ListNode* head) {
    int ret = 0;
    while (head != nullptr) ret = (ret << 1) | head->val, head = head->next;
    return ret;
  }
};
