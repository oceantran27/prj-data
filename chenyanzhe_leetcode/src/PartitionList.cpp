#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "PartitionList.hpp"

ListNode *PartitionList::partition(ListNode *head, int x) {
    ListNode dummyL(0);
    ListNode *tailL = &dummyL;
    ListNode dummyR(0);
    ListNode *tailR = &dummyR;

    ListNode *tail = head;

    while (tail) {
        if (tail->val < x) {
            tailL->next = tail;
            tailL = tail;
        } else {
            tailR->next = tail;
            tailR = tail;
        }
        tail = tail->next;
    }

    tailL->next = dummyR.next;
    tailR->next = nullptr;
    return dummyL.next;
}
