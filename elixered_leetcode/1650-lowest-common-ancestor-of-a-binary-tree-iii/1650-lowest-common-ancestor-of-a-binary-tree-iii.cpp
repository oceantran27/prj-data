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
    Node* left;
    Node* right;
    Node* parent;
};
*/

class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
        unordered_set<int> ancestors;
        while(p->parent){
            ancestors.insert(p->val);
            p = p->parent;
        }
        while(q->parent){
            if(ancestors.count(q->val))
                return q;
            q = q->parent;
        }
        return q;
    }
};