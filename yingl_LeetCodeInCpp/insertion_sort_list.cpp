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
  ListNode *insertionSortList(ListNode *head) {
    ListNode *sorted = NULL;
    ListNode *node = NULL;

    while (head != NULL) {
      node = head->next;
      insert_node(sorted, head);
      head = node;
    }

    return sorted;
  }

protected:
  void insert_node(ListNode *&head, ListNode *&node) {
    if (NULL == head) {
      head = node;
      head->next = NULL;
    }
    else {
      if (node->val <= head->val) {
        node->next = head;
        head = node;
      }
      else {
        ListNode *prev = NULL;
        ListNode *next = head;

        while (next != NULL) {
          if (next->val < node->val) {
            prev = next;
            next = next->next;
          }
          else {
            prev->next = node;
            node->next = next;

            return;
          }
        }

        prev->next = node;
        node->next = NULL;
      }
    }
  }
};