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
    ListNode* deleteDuplication(ListNode* head) {
        auto dummy = new ListNode(-1);
        dummy->next=head;
        auto p=dummy;
        while(p->next){
            auto q=p->next;
            while (q && p->next->val == q->val) q = q->next;

            if (p->next && p->next->next == q) p = p->next;
            else p->next = q;
        }
        return dummy->next;
    }
};