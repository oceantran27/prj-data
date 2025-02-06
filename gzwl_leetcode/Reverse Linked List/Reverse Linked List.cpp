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
        //头插法逆置单链表，每次都把下一个节点插到头部
        ListNode* root = head;
        while(root && head->next){
            ListNode *p = head->next;
            head->next = p->next;
            p->next = root;
            root = p;
        }
        return root;
    }
};
