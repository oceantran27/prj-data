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
    ListNode* middleNode(ListNode* head) {
        auto a = head, b = head;
        while(b && b->next) a = a->next, b = b->next->next;
        return a;
    }
};
