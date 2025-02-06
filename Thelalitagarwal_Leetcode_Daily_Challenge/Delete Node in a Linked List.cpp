#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Approach :1

*node=*node->next;

// Approach :2

void deleteNode(ListNode* node) {
        ListNode* next = node->next;
        *node = *next;
        delete next;
}