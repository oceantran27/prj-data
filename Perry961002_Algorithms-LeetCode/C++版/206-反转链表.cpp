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
    ListNode* reverseList(ListNode* head) {
        /*
        if(head == NULL || head->next == NULL)
            return head;
        //递归
        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
        */
        ListNode* pre = NULL;
        ListNode* next = NULL;        
        ListNode* node = head;
        while(node != NULL)
        {
            next = node->next;
            node->next = pre;
            pre = node;
            node = next;
        }
        return pre;
    }
};