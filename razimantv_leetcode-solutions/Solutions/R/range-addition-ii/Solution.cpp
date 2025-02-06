#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/range-addition-ii

class Solution {
 public:
  int maxCount(int m, int n, vector<vector<int>>& ops) {
    for (auto& v : ops) m = min(m, v[0]), n = min(n, v[1]);
    return m * n;
  }
};
