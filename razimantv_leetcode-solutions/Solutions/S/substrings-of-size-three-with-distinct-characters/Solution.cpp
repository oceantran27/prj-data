#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters

class Solution {
 public:
  int countGoodSubstrings(string s) {
    int ret = 0;
    for (int i = 2; i < s.size(); ++i)
      if (s[i] != s[i - 1] and s[i] != s[i - 2] and s[i - 1] != s[i - 2]) ++ret;
    return ret;
  }
};
