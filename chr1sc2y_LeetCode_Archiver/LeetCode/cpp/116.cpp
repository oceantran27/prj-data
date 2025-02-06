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
    void connect(TreeLinkNode *root) {
        if (!root)
            return;
        TreeLinkNode *prev = nullptr, *head = root;
        while (root) {
            while (root) {
                if (root->left) {
                    if (prev)
                        prev->next = root->left;
                    else
                        head = root->left;
                    prev = root->left;
                }
                if (root->right) {
                    if (prev)
                        prev->next = root->right;
                    else
                        head = root->right;
                    prev = root->right;
                }
                root = root->next;
            }
            root = head;
            head = nullptr;
            prev = nullptr;
        }
    }
};