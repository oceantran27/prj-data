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
    int countNodes(TreeNode* root) {
        return !root ? 0 : 1 + countNodes(root->left) + countNodes(root->right);
    }
};