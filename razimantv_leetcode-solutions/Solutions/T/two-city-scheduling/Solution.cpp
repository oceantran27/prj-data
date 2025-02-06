#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/two-city-scheduling

class Solution {
 public:
  int twoCitySchedCost(vector<vector<int>>& costs) {
    int N = costs.size() / 2, ans = 0;
    nth_element(costs.begin(), costs.begin() + N, costs.end(),
                [](const vector<int>& u, const vector<int>& v) -> bool {
                  return u[0] - u[1] < v[0] - v[1];
                });
    for (int i = 0; i < N; i++) ans += costs[i][0] + costs[i + N][1];
    return ans;
  }
};
