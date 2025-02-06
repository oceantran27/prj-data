#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "InsertionSortList.hpp"

#include <climits>

using namespace std;

ListNode *InsertionSortList::insertionSortList(ListNode *head) {
    if (head == nullptr) return head;

    ListNode dummy(0);

    ListNode *cur = head;
    while (cur) {
        ListNode *nextcur = cur->next;

        // insert into new list
        ListNode *tail = dummy.next;
        ListNode *prev = &dummy;
        while (tail && tail->val < cur->val) {
            prev = tail;
            tail = tail->next;
        }
        if (tail) {
            prev->next = cur;
            cur->next = tail;
        } else {
            prev->next = cur;
            cur->next = nullptr;
        }

        cur = nextcur;
    }

    return dummy.next;
}
