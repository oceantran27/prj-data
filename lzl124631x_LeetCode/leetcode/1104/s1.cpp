#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree/
// Author: github.com/lzl124631x
// Time: O(logN)
// Space: O(1)
class Solution {
    inline int r(int label, int row) {
        return 3 * (1 << row) - label - 1;
    }
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> ans(1, label);
        while (label != 1) {
            int row = log2(label);
            if (row % 2) label = r(label, row) / 2;
            else label = r(label / 2, row - 1);
            ans.push_back(label);
            --row;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};