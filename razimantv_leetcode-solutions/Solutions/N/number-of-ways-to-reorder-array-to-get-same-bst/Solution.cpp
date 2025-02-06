#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/

class Solution {
 public:
  const int MOD = 1'000'000'007;
  vector<vector<int>> ncr;
  int numOfWays(vector<int>& nums) {
    int n = nums.size();
    ncr = vector<vector<int>>(n + 1, vector<int>(n + 1));
    for (int i = 0; i <= n; ++i) {
      ncr[i][0] = 1;
      for (int j = 1; j <= i; ++j) {
        ncr[i][j] = ncr[i - 1][j] + ncr[i - 1][j - 1];
        if (ncr[i][j] >= MOD) ncr[i][j] -= MOD;
      }
    }
    return work(nums, 0, 1, n).second - 1;
  }

  pair<int, int> work(const vector<int>& nums, int start, int left, int right) {
    int leftcnt{}, rightcnt{};
    long long ways = 1;
    bool lflag{}, rflag{};
    for (int i = start + 1, n = nums.size(); i < n and !(lflag and rflag);
         ++i) {
      if (nums[i] < left or nums[i] > right) continue;
      if ((nums[i] < nums[start]) and !lflag) {
        auto [childcnt, childways] = work(nums, i, left, nums[start]);
        ways = (ways * childways) % MOD;
        leftcnt += childcnt;
        lflag = true;
      }
      if ((nums[i] > nums[start]) and !rflag) {
        auto [childcnt, childways] = work(nums, i, nums[start], right);
        ways = (ways * childways) % MOD;
        rightcnt += childcnt;
        rflag = true;
      }
    }

    ways = (ways * ncr[leftcnt + rightcnt][leftcnt]) % MOD;
    return {leftcnt + rightcnt + 1, ways};
  }
};
