#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include "Tree.h"

//Time Complexity O(n)  Space Complexity O(n)
class Solution{
public:
    bool findTarget(TreeNode* root,int k){
		unordered_set<int> s;
		return dfs(root,s,k);
	}
	bool dfs(TreeNode* root,unordered_set<int>& s,const int& k){
		if(root){
			if(s.find(k-root->val)!=s.end())
				return true;
			else
				s.insert(root->val);
			return dfs(root->left,s,k)||dfs(root->right,s,k);
		}else
			return false;
	}
};

//Time Complexity O(n)  Space Complexity O(n)
class Solution1{
public:
	bool findTarget(TreeNode* root,int k){
		vector<int> v;
		dfs(root,v);
		for(int i=0,j=v.size()-1;i<j;){
			if(v[i]+v[j]==k)
				return true;
			else{
				v[i]+v[j]<k?i++:j--;
			}
		}
		return false;
	}
	void dfs(TreeNode* root,vector<int> &v){
		if(root){
			dfs(root->left,v);
			v.push_back(root->val);
			dfs(root->right,v);
		}
	}

};

//Time Complexity O(nlgn)  Space Complexity O(h)  h is the height of the tree, which is lgn at best case, n at worst case
class Solution2 {
public:
    bool findTarget(TreeNode* root, int k) {
        return dfs(root,root,k);
    }
    bool dfs(TreeNode* root,TreeNode* cur,int k){
        if(!cur)
            return false;
        return search(root,cur,k-cur->val)||dfs(root,cur->left,k)||dfs(root,cur->right,k);
    }
    bool search(TreeNode* root,TreeNode* cur,int val){
        if(!root)
            return false;
        if(!cur)
            return false;
        if(root->val==val&&cur!=root)
            return true;
        if(root->val<val)
            return search(root->right,cur,val);
        else
            return search(root->left,cur,val);
    }
};

int main(){
    TreeEnv t;
    vector<int> v={5,3,6,2,4,NULL_TREENODE,7};
    TreeNode* root=t.initialTree(v);
    
    Solution s;
    int target=13;
    cout<<s.findTarget(root,target)<<endl;
    
    return 0;
}




