#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next) {
      return head;
    }
    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenStart = head->next;
    while (odd->next && odd->next->next) {
      odd->next = even->next;
      odd = odd->next;
      even->next = odd->next;
      even = even->next;
    }
    if (even) {
      even->next = nullptr;
    }
    odd->next = evenStart;
    return head;
  }
};
