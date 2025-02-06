#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int result;
    void dfs(TreeNode *node,int tempVal)
    {
        tempVal = tempVal*10 + node->val;
        if(node->left || node->right)
        {
            if(node->left)
                dfs(node->left,tempVal);
            if(node->right)
                dfs(node->right,tempVal);
        }
        else
            result += tempVal;
    }

    int sumNumbers(TreeNode *root) 
    {
        result = 0;
        if(root)
            dfs(root,0);
        else
            return 0;
        return result;
    }
};