#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/prime-in-diagonal/

class Solution {
 public:
  bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
      if (n % i == 0) return false;
    return true;
  }
  int diagonalPrime(vector<vector<int>>& nums) {
    int ret{};
    for (int i = 0, n = nums.size(); i < n; ++i) {
      for (int j : {i, n - 1 - i}) {
        int x = nums[i][j];
        if (prime(x)) ret = max(ret, x);
      }
    }
    return ret;
  }
};
