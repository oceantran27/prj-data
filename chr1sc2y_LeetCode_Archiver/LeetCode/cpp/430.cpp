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
    Node *flatten(Node *head) {
        if (!head)
            return nullptr;
        stack<Node *> s;
        Node *root = head;
        s.push(head);
        while (!s.empty()) {
            head = s.top();
            s.pop();
            if (head->next) s.push(head->next);
            if (head->child) s.push(head->child);
            head->child = nullptr;
            if (!s.empty()) {
                head->next = s.top();
                s.top()->prev = head;
            }
        }
        return root;
    }
};