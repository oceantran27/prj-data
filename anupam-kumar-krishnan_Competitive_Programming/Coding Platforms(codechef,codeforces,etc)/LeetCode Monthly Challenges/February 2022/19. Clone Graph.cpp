#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    void solve(Node* node, unordered_map<int,Node*>& mp){
        if(mp[node->val])return;
        mp[node->val]=new Node(node->val);
        for(Node* x:node->neighbors){
            solve(x,mp);
            mp[node->val]->neighbors.push_back(mp[x->val]);
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==nullptr) return nullptr;
        unordered_map<int,Node*> mp;
        solve(node,mp);
        return mp[1];
    }
};
