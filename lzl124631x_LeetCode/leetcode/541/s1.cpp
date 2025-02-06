#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/reverse-string-ii
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
  string reverseStr(string s, int k) {
    for (int i = 0; i < s.size(); i += 2 * k)
      reverse(s.begin() + i, s.begin() + min((int)s.size(), i + k));
    return s;
  }
};