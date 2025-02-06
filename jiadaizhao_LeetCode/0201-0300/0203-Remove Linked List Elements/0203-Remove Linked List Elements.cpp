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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(-1);
        ListNode* p = &dummy;
        while (head) {
            if (head->val != val) {
                p->next = head;
                p = p->next;
            }
            head = head->next;
        }
        
        p->next = nullptr;        
        return dummy.next;
    }
};
