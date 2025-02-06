#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        ListNode newhead(0), *p = &newhead;
        newhead.next = head;
        while (p->next && p->next->next){
            ListNode *p1 = p->next, *p2 = p1->next, *p3 = p2->next;
            p1->next = p3;
            p2->next = p1;
            p->next = p2;
            p = p1;
        }
        return newhead.next;
    }
};
