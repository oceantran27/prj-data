#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-linked-list

class Solution {
 public:
  ListNode* reverseList(ListNode* head, ListNode* prev = nullptr) {
    if (!head) return head;
    ListNode* temp = head->next;
    head->next = prev;
    return temp ? reverseList(temp, head) : head;
  }
};
