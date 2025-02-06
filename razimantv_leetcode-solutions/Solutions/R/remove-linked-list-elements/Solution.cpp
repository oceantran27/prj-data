#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-linked-list-elements

class Solution {
 public:
  ListNode* removeElements(ListNode* head, int val) {
    if (head == NULL) return head;
    head->next = removeElements(head->next, val);
    return (head->val == val) ? head->next : head;
  }
};
