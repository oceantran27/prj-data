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
    ListNode *oddEvenList(ListNode *head) {
        if (!head)
            return nullptr;
        ListNode *odd = head, *even = head->next, *evenHead = head->next;
        while (odd && even) {
            odd->next = even->next;
            if (odd->next) {
                even->next = odd->next->next;
                odd = odd->next;
            }
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};