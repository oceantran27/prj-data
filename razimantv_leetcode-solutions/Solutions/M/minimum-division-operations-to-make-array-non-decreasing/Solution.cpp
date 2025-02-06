#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-division-operations-to-make-array-non-decreasing/

class Solution {
 public:
  static std::vector<int> cache;

  Solution() {
    if (cache.empty()) {
      int nmax = 1000000;
      std::vector<int> smallprime(nmax + 1, -1);

      // Populate smallprime array using sieve of Eratosthenes
      for (int i = 2; i * i <= nmax; ++i) {
        if (smallprime[i] == -1) {  // Skip if already marked
          for (int j = i * i; j <= nmax; j += i)
            if (smallprime[j] == -1) smallprime[j] = i;
        }
      }

      // Cache the values for quick access later
      cache.resize(nmax + 1);
      for (int i = 0; i <= nmax; ++i)
        cache[i] = (smallprime[i] == -1) ? i : smallprime[i];
    }
  }

  int minOperations(vector<int>& nums) {
    std::vector<std::pair<int, int>> dp = {{cache[nums[0]], 1}, {nums[0], 0}};

    for (size_t i = 1; i < nums.size(); ++i) {
      int x = nums[i];
      if (dp[0].first > x) return -1;

      int y = cache[x];

      std::vector<std::pair<int, int>> newdp;
      if (y >= dp[1].first) {
        newdp.push_back({y, dp[1].second + 1});
      } else if (y >= dp[0].first) {
        newdp.push_back({y, dp[0].second + 1});
      }
      if (x >= dp[1].first) {
        newdp.push_back({x, dp[1].second});
      } else if (y >= dp[0].first) {
        newdp.push_back({x, dp[0].second});
      }

      dp = newdp;
    }

    int result = INT_MAX;
    for (const auto& [x, d] : dp) result = std::min(result, d);

    return result;
  }
};

std::vector<int> Solution::cache{};
