#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (NULL == head) {
      return NULL;
    }

    ListNode *curr = head;
    ListNode *next = head->next;

    while (next != NULL) {
      if (curr->val != next->val) {
        curr->next = next;
        curr = next;
      }

      next = next->next;
    }

    curr->next = NULL;

    return head;
  }
};