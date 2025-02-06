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
    bool findTarget(TreeNode *root, int k) {
        if (!root)
            return false;
        unordered_set<int> num;
        queue<TreeNode *> val;
        val.push(root);
        while (!val.empty()) {
            TreeNode *temp = val.front();
            int &&tempNum = k - temp->val;
            if (num.find(tempNum) != num.end())
                return true;
            else
                num.insert(temp->val);
            val.pop();
            if (temp->left) val.push(temp->left);
            if (temp->right) val.push(temp->right);
        }
        return false;
    }
};