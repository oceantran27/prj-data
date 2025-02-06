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
    void deleteNode(ListNode* node) {
            
        ListNode* prev = nullptr;
        while(node->next) {
            node->val = node -> next -> val;
            prev = node;
            node = node->next;
        }

        prev->next = nullptr;
    }
};