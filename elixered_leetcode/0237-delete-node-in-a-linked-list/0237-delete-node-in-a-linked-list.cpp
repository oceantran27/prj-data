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
    if(node == NULL) return;
    ListNode *tmp = node->next;
    node->val = tmp->val;
    node->next = tmp->next;
    delete tmp;
}
};