#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/linked-list-random-node

class Solution {
 public:
  /** @param head The linked list's head.
      Note that the head is guaranteed to be not null, so it contains at least
     one node. */

  ListNode *l;
  int N;
  Solution(ListNode *head) {
    l = head;
    N = 0;
    while (head != nullptr) ++N, head = head->next;
  }

  /** Returns a random node's value. */
  int getRandom() {
    ListNode *c = l;
    int x = rand() % N;
    while (x--) c = c->next;
    return c->val;
  }
};

