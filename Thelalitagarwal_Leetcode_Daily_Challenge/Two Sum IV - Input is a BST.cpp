#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution{
    public:
vector<int> vec;
void inorder(TreeNode* node){
if(!node)
return;
inorder(node -> left);
vec.push_back(node -> val);
inorder(node -> right);
}
bool findTarget(TreeNode* root, int k) {
    if(!root)
        return false;
    inorder(root);
    int i = 0, j = vec.size()-1;
    while(i < j)
    {
        int sum = vec[i]+vec[j];
        if(sum == k)
            return true;
        else if(sum < k)
            i++;
        else
            j--;
    }
    return false;
}
};