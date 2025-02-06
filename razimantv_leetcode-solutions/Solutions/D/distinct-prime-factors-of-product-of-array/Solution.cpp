#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/

class Solution {
 public:
  int distinctPrimeFactors(vector<int>& nums) {
    vector<vector<int>> primes(1001);
    for (int i = 2; i < 1001; ++i) {
      if (primes[i].size()) continue;
      for (int j = i; j < 1001; j += i) primes[j].push_back(i);
    }

    unordered_set<int> all;
    for (int x : nums)
      for (int p : primes[x]) all.insert(p);
    return all.size();
  }
};
