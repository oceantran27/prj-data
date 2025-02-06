#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/middle-of-the-linked-list

class Solution {
 public:
  ListNode* middleNode(ListNode* head) {
    ListNode *a = head, *b = head->next;
    while (1) {
      if (b == NULL)
        return a;
      else if (b->next == NULL)
        return a->next;
      a = a->next;
      b = b->next->next;
    }
  }
};
