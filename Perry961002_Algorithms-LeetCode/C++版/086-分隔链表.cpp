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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* small = new ListNode(0);  //放比x小的节点
        ListNode* s = small;  //small被保存，s用来构造链表
        ListNode* big = new ListNode(0);  //放比>=x的
        ListNode* b = big;
        while(head !=NULL)
        {
            if(head->val < x)
            {
                s->next = new ListNode(head->val);
                s = s->next;
                head = head->next;
            }
            else
            {
                b->next = new ListNode(head->val);
                b = b->next;
                head = head->next;
            }
        }
        s->next = big->next;  //将两个链表连接
        return small->next;
    }
};