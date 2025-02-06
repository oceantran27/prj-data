#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Solution for Problem: https://leetcode.com/problems/delete-node-in-a-linked-list/
Delete any but last node in Linked List.
*/

/*
Copy the content of next node to this node and delete the next node.
*/
void deleteNode(ListNode* node) {
        if (!node || !node->next)
            return;
        ListNode *del = node->next;
        
        node->val = del->val;
        node->next = del->next;
        
        delete del;
    }
