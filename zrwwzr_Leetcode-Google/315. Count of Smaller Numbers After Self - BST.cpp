#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Node{
  int val, cnt;
  Node* left, *right;
  Node(int v) : val(v), cnt(0), left(NULL), right(NULL){};
};
class Solution {
public:
    int insert(Node* &root, int val){
        if(!root){ 
            root = new Node(val);
            return 0;
        }
        if(val < root->val){
            root->cnt++;
            return insert(root->left, val);
        }
        return insert(root->right, val) + root->cnt + (root->val < val ? 1 : 0);
    }
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> res(nums.size());
        if(nums.empty()) return res;
        Node* root = NULL;
        for(int i = nums.size() - 1; i >= 0; --i)
            res[i] = insert(root, nums[i]);
        return res;
    }
};
