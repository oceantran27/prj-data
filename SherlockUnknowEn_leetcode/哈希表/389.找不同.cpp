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
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for (char c : s) {
            ans = ans ^ c;
        }
        for (char c : t) {
            ans = ans ^ c;
        }
        return ans;
    }
};
// @lc code=end

