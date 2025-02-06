#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/removing-stars-from-a-string/

class Solution {
 public:
  string removeStars(string s) {
    string ret;
    for (char c : s) {
      if (c == '*') {
        if (!ret.empty()) ret.pop_back();
      } else
        ret += c;
    }
    return ret;
  }
};
