#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-nice-pairs-in-an-array

class Solution {
 public:
  int rev(int n) {
    int ret = 0;
    while (n) ret = ret * 10 + (n % 10), n /= 10;
    return ret;
  }
  int countNicePairs(vector<int>& nums) {
    map<int, int> cnt;
    for (int n : nums) cnt[n - rev(n)]++;

    int ans = 0, MOD = 1'000'000'007;
    for (auto [x, c] : cnt) {
      ans = (ans + (c * (long long)(c - 1)) / 2) % MOD;
    }
    return ans;
  }
};
