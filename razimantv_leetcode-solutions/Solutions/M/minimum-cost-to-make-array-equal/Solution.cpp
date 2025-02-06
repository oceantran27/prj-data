#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-cost-to-make-array-equal/

class Solution {
 public:
  long long minCost(vector<int>& nums, vector<int>& cost) {
    int n = nums.size();
    vector<pair<int, int>> numcost(n);
    for (int i = 0; i < n; ++i) {
      numcost[i] = {nums[i], cost[i]};
    }
    sort(numcost.begin(), numcost.end());
    vector<long long> ret(n);

    long long temp{}, ctot{};
    for (int i = 0; i < n; ++i) {
      ret[i] += numcost[i].first * ctot - temp;
      ctot += numcost[i].second;
      temp += numcost[i].first * (long long)numcost[i].second;
    }

    temp = ctot = 0;
    for (int i = n - 1; i >= 0; --i) {
      ret[i] -= numcost[i].first * ctot - temp;
      ctot += numcost[i].second;
      temp += numcost[i].first * (long long)numcost[i].second;
    }

    return *min_element(ret.begin(), ret.end());
    // sum_{i'<i} (n(i) _ n(i')) * c(i') + sum(i'>i) (n(i') - n(i)) * c(i')
  }
};
