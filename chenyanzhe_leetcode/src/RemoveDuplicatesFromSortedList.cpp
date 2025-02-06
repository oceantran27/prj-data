#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "RemoveDuplicatesFromSortedList.hpp"

ListNode *RemoveDuplicatesFromSortedList::deleteDuplicates(ListNode *head) {
    ListNode *a = head;

    if (a == nullptr)
        return head;

    ListNode *b = head->next;

    if (b == nullptr)
        return head;

    while (b != nullptr) {
        if (a->val == b->val) {
            a->next = b->next;
            b = b->next;
        } else {
            a = b;
            b = b->next;
        }
    }

    return head;
}
