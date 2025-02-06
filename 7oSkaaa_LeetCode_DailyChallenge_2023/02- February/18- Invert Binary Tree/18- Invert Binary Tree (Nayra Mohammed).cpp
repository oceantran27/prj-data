#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Author: Nayra Mohammed

class Solution {
public:
  
    /*
      - All we need to do is traverse through the tree and for each node we reach swap it's left and right childs
    */  
  
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root) // no nodes here ? return null :Otherwise continue traversing 
            return nullptr;
      
        swap(root->left,root->right); //swap current node's child
        
        // continue traversing through these childs
        invertTree(root->right);
        invertTree(root->left);
        
        return root; //return answer after being processed through all recursive calls
    }
};
