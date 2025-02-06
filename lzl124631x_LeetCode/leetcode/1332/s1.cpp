#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/remove-palindromic-subsequences/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.empty()) return 0;
        bool isPalindrome = true;
        for (int i = 0, j = s.size() - 1; i < j && isPalindrome; ++i, --j) {
            isPalindrome = s[i] == s[j];
        }
        return isPalindrome ? 1 : 2;
    }
};