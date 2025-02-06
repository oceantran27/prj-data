#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "ReverseLinkedList.hpp"

ListNode *ReverseLinkedList::reverseList(ListNode *head) {
    ListNode *tail = head;
    while (tail && tail->next)
        tail = tail->next;

    if (head == tail) return head;

    ListNode *a = head;
    ListNode *b = a->next;
    while (a != tail) {
        ListNode *t = b->next;
        b->next = a;
        a = b;
        b = t;
    }
    head->next = nullptr;

    return tail;
}
