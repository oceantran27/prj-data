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
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for (char c : s) {
            while (j < t.size() && c != t[j])
                j++;
            if (j >= t.size())
                return false;
            j++;
        }
        return true;
    }
};
// @lc code=end

