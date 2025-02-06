#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/linked-list-cycle-ii

class Solution {
 public:
  ListNode *detectCycle(ListNode *head) {
    if (head == NULL) return NULL;
    ListNode *slow = head, *fast = head;
    do {
      slow = slow->next;
      fast = fast->next;
      if (fast == NULL) return NULL;
      fast = fast->next;
      if (fast == NULL) return NULL;
    } while (slow != fast);
    fast = head;
    while (slow != fast) fast = fast->next, slow = slow->next;
    return slow;
  }
};
