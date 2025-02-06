#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "headfile.h"
using namespace std;
vector<int> inorderTraversal(TreeNode* root) {
    stack<TreeNode*> S;
    vector<int> v;
    TreeNode* rt = root;
    while(rt || S.size()){
        while(rt){
            S.push(rt);
            rt=rt->left;
        }
        rt=S.top();S.pop();
        v.push_back(rt->val);
        rt=rt->right;
    }
    return v;        
}
