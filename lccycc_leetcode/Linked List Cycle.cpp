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
    bool hasCycle(ListNode *head) {
        auto p = head;
        while (p){
            if (p->next == NULL || p->next->next == NULL) return false;
            p = p->next->next;
            head = head->next;
            if (head == p) return true;
        }
        return false;
    }
};
