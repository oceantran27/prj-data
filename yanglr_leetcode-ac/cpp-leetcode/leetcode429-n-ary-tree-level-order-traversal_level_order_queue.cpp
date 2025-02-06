#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (root == nullptr) return {};
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty())
        {
            vector<int> curLevel;
            int curSize = q.size();
            for (int i = curSize; i > 0; i--)
            {
                Node* p = q.front();
                q.pop();
                curLevel.push_back(p->val);
                // loop to handle children
                for (auto child : p->children)
                    if (child) q.push(child);  /* 判断/不判断空看起来没影响 */
            }
            res.push_back(curLevel);
        }
        
        return res;
    }
};

// Test
int main()
{
    Solution sol;
    
    Node* root = new Node(1);  
    auto child1 = new Node(3);
    auto child11= new Node(5);
    auto child12= new Node(6);
    child1->children.push_back(child11);
    child1->children.push_back(child12);
    root->children.push_back(child1);

    auto child2 = new Node(2);
    auto child3 = new Node(4);
    root->children.push_back(child2);     
    root->children.push_back(child3); 
    
    auto res = sol.levelOrder(root);

    return 0;
}