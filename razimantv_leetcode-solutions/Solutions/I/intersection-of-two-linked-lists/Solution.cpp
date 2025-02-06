#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/intersection-of-two-linked-lists

class Solution {
 public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int nA = 0, nB = 0;
    ListNode *cur = headA;
    while (cur != NULL) cur = cur->next, ++nA;
    cur = headB;
    while (cur != NULL) cur = cur->next, ++nB;

    while (nA > nB) headA = headA->next, --nA;
    while (nA < nB) headB = headB->next, --nB;

    while (headA != headB) headA = headA->next, headB = headB->next;
    return headA;
  }
};
