#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "LinkedListCycleII.hpp"

ListNode *LinkedListCycleII::detectCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow) {
            while (head != slow) {
                head = head->next;
                slow = slow->next;
            }
            return slow;
        }
    }

    return nullptr;
}