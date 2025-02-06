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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<TreeNode *> f, g;
        vector<vector<int> > res;
        if (!root) return res;
        f.push_back(root);
        while (f.size()){
            res.push_back(vector<int>());
            g.clear();
            for (auto x : f){
                res.back().push_back(x->val);
                if (x->left) g.push_back(x->left);
                if (x->right) g.push_back(x->right);
            }
            f.swap(g);
        }
        return res;
    }
};
