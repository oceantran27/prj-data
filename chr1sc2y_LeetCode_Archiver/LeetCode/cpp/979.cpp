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
    int distributeCoins(TreeNode *root) {
        if (!root)
            return 0;
        int total = 0;
        CountCoins(root, total);
        return total;
    }

    int CountCoins(TreeNode *node, int &total) {
        if (!node)
            return 0;
        int &&value = node->val - 1 + CountCoins(node->left, total) + CountCoins(node->right, total);
        total += abs(value);
        return value;
    }
};
