#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/swap-nodes-in-pairs

class Solution {
 public:
  ListNode* swapPairs(ListNode* head) {
    if (head == nullptr or head->next == nullptr) return head;
    auto n = swapPairs(head->next->next);
    head->next->next = head;
    swap(head->next, n);
    return n;
  }
};
