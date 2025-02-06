#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/apply-bitwise-operations-to-make-strings-equal/

class Solution {
 public:
  bool makeStringsEqual(string s, string target) {
    if (s == target)
      return true;
    else if (find(s.begin(), s.end(), '1') == s.end() or
             find(target.begin(), target.end(), '1') == target.end())
      return false;
    else
      return true;
  }
};
