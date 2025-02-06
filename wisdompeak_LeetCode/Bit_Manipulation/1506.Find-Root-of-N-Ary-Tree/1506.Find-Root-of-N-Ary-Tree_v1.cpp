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
*/

class Solution {
    unordered_set<Node*>Set;
public:
    Node* findRoot(vector<Node*> tree) 
    {
        int n = tree.size();
        for (auto node: tree)
        {
            if (Set.find(node)!=Set.end())
                continue;
            for (auto child: node->children)
                dfs(child);
        }
        for (auto node: tree)
        {
            if (Set.find(node)==Set.end())
                return node;
        }
        return NULL;
    }
    
    void dfs(Node* node)
    {
        if (Set.find(node)!=Set.end())
            return;
        Set.insert(node);
        for (auto child: node->children)
            dfs(child);
    }
};
