#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return head;
        }
        ListNode* ptr = head;
        ListNode* tmp;
        while (ptr->next != NULL) {
            if (ptr->val == ptr->next->val) {
                tmp = ptr->next;
                ptr->next = tmp->next;
                delete tmp;
            } else {
                ptr = ptr->next;
            }
        }
        return head;
    }
};
