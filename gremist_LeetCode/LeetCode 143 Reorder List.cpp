#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 143 Reorder List.cpp

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
    void reorderList(ListNode* head) {
        ListNode *ps = head, *pf = head;
        while (pf && pf->next) {
            ps = ps->next;
            pf = pf->next->next;
        }
        
        ListNode *rhead = NULL;
        while (ps) {
            ListNode *pt = ps->next;
            ps->next = rhead;
            rhead = ps;
            ps = pt;
        }
        
        ListNode *pa = head, *pb = rhead;
        while (pa) {
            ListNode *pt = pa->next;
            pa->next = pb;
            pa = pb;
            pb = pt;
        }
    }
};