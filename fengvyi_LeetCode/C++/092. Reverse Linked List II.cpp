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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* l = new ListNode(0);
        l->next = head;
        int x = m, y = n - m;
        while(--x) l = l->next;
        ListNode* pre = l->next, *cur = pre->next, *next;
        while(y--){
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        l->next->next = cur;
        l->next = pre;
        return m == 1 ? pre : head;
    }
};
