#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/maximum-score-after-splitting-a-string
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    int maxScore(string s) {
        int one = 0, zero = 0, ans = 0;
        for (char c : s) one += c == '1';
        for (int i = 0; i < s.size() - 1; ++i) {
            char c  = s[i];
            zero += c == '0';
            one -= c == '1';
            ans = max(ans, zero + one);
        }
        return ans;
    }
};