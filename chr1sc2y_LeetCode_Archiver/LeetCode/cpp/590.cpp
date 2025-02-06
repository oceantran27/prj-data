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
    vector<int> postorder(Node *root) {
        vector<int> order;
        helper(root, order);
        return order;
    }

    void helper(Node *root, vector<int> &order) {
        if (!root)
            return;
        for (auto child: root->children)
            helper(child, order);
        order.push_back(root->val);
    }
};