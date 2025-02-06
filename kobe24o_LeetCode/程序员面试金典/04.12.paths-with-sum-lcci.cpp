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
    int count = 0;
public:
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        calsum(root,0,sum);
        pathSum(root->left,sum);
        pathSum(root->right,sum);
        return count;
    }

    void calsum(TreeNode* root, int s, int sum)
    {
        if(!root)  
            return;
        if(s+root->val == sum)
            count++;
        calsum(root->left,s+root->val,sum);
        calsum(root->right,s+root->val,sum);
    }
};