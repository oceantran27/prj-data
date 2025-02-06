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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr) {
            if (prev->val != curr->val) {
                prev->next = curr;
                prev = prev->next;
            }
            curr = curr->next;
        }
        prev->next = NULL;
        return head;
    }
};
