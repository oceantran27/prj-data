#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/optimal-partition-of-string/

class Solution {
 public:
  int partitionString(string s) {
    int ret = 1;
    unordered_set<char> seen;
    for (char c : s) {
      if (seen.count(c)) {
        ++ret;
        seen.clear();
      }
      seen.insert(c);
    }
    return ret;
  }
};
