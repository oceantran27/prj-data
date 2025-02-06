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
    ListNode *middleNode(ListNode *head) {
        if (!head) return nullptr;
        ListNode *first = head, *second = head;
        while (first && first->next) {
            first = first->next->next;
            second = second->next;
        }
        return second;
    }
};