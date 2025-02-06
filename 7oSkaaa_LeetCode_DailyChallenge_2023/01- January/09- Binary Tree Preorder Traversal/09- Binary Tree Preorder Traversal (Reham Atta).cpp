#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Reham Atta


class Solution {
public: 

    // intialize vector to store tree nodes
    // perorder ----> root left right 

    vector<int>vec;
    vector<int> preorderTraversal(TreeNode* root) {

        // Check if the current node is empty or Null
        // traverse the left subtree recursively by calling preorder function
        // traverse the right subtree recursively by calling preorder function

        if(root) {
            vec.push_back(root -> val);
            preorderTraversal(root -> left);
            preorderTraversal(root -> right);
        }
        return vec;
    }
};