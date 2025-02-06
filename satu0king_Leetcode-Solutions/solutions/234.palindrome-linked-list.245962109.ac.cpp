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
  ListNode *temp;

public:
  bool isPalindrome(ListNode *head) {
    temp = head;
    return check(head);
  }

  bool check(ListNode *head) {
    if (!head)
      return true;

    bool isPalindrome = check(head->next) && temp->val == head->val;
    temp = temp->next;

    return isPalindrome;
  }
};
