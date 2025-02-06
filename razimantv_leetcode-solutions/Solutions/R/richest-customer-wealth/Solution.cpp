#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/richest-customer-wealth

class Solution {
 public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int ret = 0;
    for (const auto& a : accounts)
      ret = max(ret, accumulate(a.begin(), a.end(), 0));
    return ret;
  }
};
