#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "SwapNodesInPairs.hpp"

ListNode *SwapNodesInPairs::swapPairs(ListNode *head) {
    ListNode dummy(0);
    dummy.next = head;

    for (ListNode *p = &dummy; p->next && p->next->next; p = p->next->next) {
        ListNode *t = p->next;
        p->next = t->next;
        t->next = p->next->next;
        p->next->next = t;
    }

    return dummy.next;
}
