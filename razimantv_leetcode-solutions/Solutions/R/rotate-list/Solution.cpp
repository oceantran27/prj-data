#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/rotate-list

class Solution {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    if (head == nullptr) return head;
    ListNode* cur = head;
    int N{};
    while (cur != nullptr) cur = cur->next, ++N;
    k %= N;
    if (k == 0) return head;
    k = N - k;

    cur = head;
    for (int i = 1; i < N; ++i) cur = cur->next;
    cur->next = head;

    cur = head;
    for (int i = 1; i < k; ++i) cur = cur->next;
    head = cur->next;
    cur->next = nullptr;

    return head;
  }
};
