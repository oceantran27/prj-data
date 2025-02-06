#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Ahmed Hossam

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        // valid case if the two trees has no nodes in this branch any more
        if(!p && !q) return true;

        // if there is a node difference between the two trees or one branch end before the another one
        if(!p || !q || p -> val != q -> val) return false;

        // check both left and right branches
        return isSameTree(p -> left, q -> left) & isSameTree(p -> right, q -> right);
    }
};