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
* 前提是每个节点(主要是根结点)的next都默认为NULL
* 每次递归都只处理root的下面两个子节点的next
*/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;we
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if (root==NULL || root->left==NULL)
            return root;
        root->left->next=root->right;
        if (root->next!=NULL)
            root->right->next=root->next->left;
        //当所有节点的next都默认初始化为NULL时可以省去else(这里就可以删掉else)
        else
            root->right->next=NULL;
        connect(root->left);
        connect(root->right);
        return root;
    }
};
