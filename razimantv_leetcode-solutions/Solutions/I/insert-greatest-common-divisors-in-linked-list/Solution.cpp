#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

class Solution {
 public:
  ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode *next = head->next, *ret = head;
    while (next) {
      head->next = new ListNode(gcd(head->val, next->val), next);
      head = next;
      next = next->next;
    }
    return ret;
  }
};
