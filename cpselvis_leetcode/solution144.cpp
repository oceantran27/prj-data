#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/**
 * Binary Tree Preorder Traversal
 * Traversal order is from root, then left child node, end in right child node.
 * Recursive method.
 *
 * cpselvis (cpselvis@gmail.com)
 * August 27th, 2016
 */
#include<iostream>
#include<vector>

using namespace std;


struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ret;
    dfs(ret, root);
    return ret;
  }
  void dfs(vector<int> &ret, TreeNode *root)
  {
    if (root != NULL)
    {
      ret.push_back(root -> val);
      dfs(ret, root -> left);
      dfs(ret, root -> right);
    }  
  }  
};


int main(int argc, char **argv)
{
  TreeNode *root = new TreeNode(1);
  root -> right = new TreeNode(2);
  root -> right -> left = new TreeNode(3);

  Solution s;
  vector<int> ret = s.preorderTraversal(root);

  for (auto i : ret)
  {
    cout << i << endl;
  }  
}  
