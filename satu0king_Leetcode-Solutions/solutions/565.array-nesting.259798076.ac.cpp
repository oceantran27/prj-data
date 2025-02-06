#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
  int ans;
  vector<int> g;
  vector<bool> visited;

public:
  int arrayNesting(vector<int> &nums) {
    ans = 0;
    int n = nums.size();

    g = nums;

    visited.resize(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
      ans = max(ans, findCycle(i));

    return ans;
  }

  int findCycle(int i) {
    if (visited[i])
      return 0;
    visited[i] = true;

    return 1 + findCycle(g[i]);
  }
};
