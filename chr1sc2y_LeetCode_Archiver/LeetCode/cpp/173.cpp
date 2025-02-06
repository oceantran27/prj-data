#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class BSTIterator {
public:
    stack<TreeNode *> s;
    int size;

    BSTIterator(TreeNode *root) {
        size = 0;
        PushAllLeft(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return size > 0;
    }

    /** @return the next smallest number */
    int next() {
        if (size <= 0)
            return 0;
        TreeNode *temp = s.top();
        int &ret = temp->val;
        s.pop();
        --size;
        if (temp->right)
            PushAllLeft(temp->right);
        return ret;
    }

    void PushAllLeft(TreeNode *node) {
        while (node) {
            s.push(node);
            node = node->left;
            ++size;
        }
    }
};