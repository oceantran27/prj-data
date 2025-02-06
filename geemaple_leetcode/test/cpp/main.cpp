#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <stack>
#include <set>

using namespace std;

#include <vector>
#include <string>

#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int, vector<int>> graph;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode *cur = q.front();
            q.pop();

            if (cur->left) {
                graph[cur->val].push_back(cur->left->val);
                graph[cur->left->val].push_back(cur->val);
                q.push(cur->left);
            }

            if (cur->right) {
                graph[cur->val].push_back(cur->right->val);
                graph[cur->right->val].push_back(cur->val);
                q.push(cur->right);
            }
        }

        return search(graph, target->val, k);
    }

    vector<int> search(unordered_map<int, vector<int>> &graph, int target, int k) {
        vector<int> res;
        unordered_set<int> visited;
        queue<int> q;
        q.push(target);
        visited.insert(target);
        int level = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int cur = q.front();
                q.pop();
                if (level == k) {
                    res.push_back(cur);
                } else {
                    for (int child: graph[cur]) {
                        if (visited.count(child) == 0) {
                            visited.insert(child);
                            q.push(child);
                        }
                    }
                }
            }
            level += 1;
        }

        return res;
    }
};
/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr obj = new ValidWordAbbr(dictionary);
 * bool param = obj.isUnique(word);
 */
/**
 * Your ValidWordAbbr object will be instantiated and called as such:
 * ValidWordAbbr obj = new ValidWordAbbr(dictionary);
 * bool param = obj.isUnique(word);
 */

int main() {
    vector<vector<int>> matrix = {
        {0,1,1,0,0,0},
        {1,0,1,0,0,0},
        {0,1,1,1,0,1},
        {0,0,1,0,1,0}
    };
    
    
    
    vector<int> nums = {7,8,8,3,8,1,5,3,5,4};
    vector<int> end = {3,4,5,6};
    vector<int> profit = {50,10,40,70};
    Solution s;
    vector<double> res = s.medianSlidingWindow(nums, 3);
    

    for (int word : res) {
        cout << to_string(word) << ", ";
    }
    cout << endl;
    
    return 0;
}

