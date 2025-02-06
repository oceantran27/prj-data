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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return head;
        }
        ListNode *new_head;
        
        new_head = head;
        head = head->next;
        new_head->next = NULL;
        ListNode *ptr;
        while (head != NULL) {
            ptr = head;
            head = head->next;
            ptr->next = new_head;
            new_head = ptr;
        }
        return new_head;
    }
};
