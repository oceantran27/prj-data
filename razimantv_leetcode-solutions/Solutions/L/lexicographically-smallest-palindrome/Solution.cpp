#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/lexicographically-smallest-palindrome/

class Solution {
 public:
  string makeSmallestPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; ++i, --j)
      s[i] = s[j] = min(s[i], s[j]);
    return s;
  }
};
