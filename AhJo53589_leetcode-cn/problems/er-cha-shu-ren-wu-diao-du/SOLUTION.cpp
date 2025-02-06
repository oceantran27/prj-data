#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


//////////////////////////////////////////////////////////////////////////
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    double minimalExecTime(TreeNode* root) 
    { 
        return helper(root).second; 
    }

    // ֱֵĺִͣʱ
    pair<int, double> helper(TreeNode* root) 
    {
        if (root == nullptr) return { 0, 0 };

        auto l = helper(root->left);
        auto r = helper(root->right);
        double minT = max(max(l.second, r.second), (l.first + r.first) / 2.0) + root->val;
        return { l.first + r.first + root->val, minT };
    }
};

//////////////////////////////////////////////////////////////////////////
double _solution_run(TreeNode* root)
{
    int caseNo = -1;
    static int caseCnt = 0;
    if (caseNo != -1 && caseCnt++ != caseNo) return {};

    Solution sln;
    return sln.minimalExecTime(root);
}

//#define USE_SOLUTION_CUSTOM
//string _solution_custom(TestCases &tc)
//{
//    return {};
//}

//////////////////////////////////////////////////////////////////////////
//#define USE_GET_TEST_CASES_IN_CPP
//vector<string> _get_test_cases_string()
//{
//    return {};
//}
