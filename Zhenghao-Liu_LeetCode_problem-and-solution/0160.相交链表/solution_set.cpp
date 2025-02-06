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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA==NULL || headB==NULL)
            return NULL;
        unordered_set<ListNode*> headA_set;
        ListNode *p=headA;
        while (p!=NULL)
        {
            headA_set.insert(p);
            p=p->next;
        }
        p=headB;
        while (p!=NULL)
        {
            if (headA_set.find(p)!=headA_set.end())
                return p;
            p=p->next;
        }
        return NULL;
    }
};
