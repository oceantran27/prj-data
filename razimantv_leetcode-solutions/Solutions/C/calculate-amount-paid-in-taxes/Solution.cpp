#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/calculate-amount-paid-in-taxes

class Solution {
 public:
  double calculateTax(vector<vector<int>>& brackets, int income) {
    int prev = 0;
    double ret = 0;
    for (const auto& v : brackets) {
      if (income <= v[0]) {
        ret += (income - prev) * v[1] / 100.;
        break;
      }
      ret += (v[0] - prev) * v[1] / 100.;
      prev = v[0];
    }
    return ret;
  }
};
