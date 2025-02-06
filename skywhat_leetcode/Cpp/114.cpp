#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<vector>

#include "Tree.h"

using namespace std;

class Solution {
private:
    TreeNode* prev=nullptr;
public:
    void flatten(TreeNode* root) {
        if(!root)
        return;
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=nullptr;
        prev=root;
    }
};
//reversed preorder

int main(){
}
