#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    judge l1 and move it forward
    judge l2 and move it forward
*/
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode head(0), *p = &head;
        int t = 0;
        while (l1 || l2 || t){
            int x = (l1?l1->val:0) + (l2?l2->val:0) + t;
            p = p->next = new ListNode(x%10);
            t = x/10;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return head.next;
    }
};
