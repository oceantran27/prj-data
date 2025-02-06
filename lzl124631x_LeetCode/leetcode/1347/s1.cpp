#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    int minSteps(string s, string t) {
        int cnt[26] = {0}, ans = 0;
        for (char c : s) cnt[c - 'a']++;
        for (char c : t) cnt[c - 'a']--;
        for (int n : cnt) {
            if (n > 0) ans += n;
        }
        return ans;
    }
};