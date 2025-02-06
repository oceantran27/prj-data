#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~
--||author : codechaser||-- 
~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return;
        if (root->left != NULL)
        {
            flatten(root->left);
            TreeNode *temp = root->right;
            root->right = root->left;
            root->left = NULL;
            TreeNode *t = root->right;
            while (t->right)
            {
                t = t->right;
            }
            t->right = temp;
        }
        flatten(root->right);
    }
};
/*
    |---------------------------------------------------|
    |||   https://codeforces.com/profile/codechaser   |||
    |||   https://www.codechef.com/users/codechaser   |||
    |||        https://github.com/code-chaser         |||
    |---------------------------------------------------|
*/