#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-provinces/

#include <vector>

// ChatGPT solution
class Solution {
 public:
  void dfs(int city, std::vector<std::vector<int>>& isConnected,
           std::vector<bool>& visited) {
    visited[city] = true;
    for (int i = 0; i < isConnected.size(); i++) {
      if (isConnected[city][i] == 1 && !visited[i]) {
        dfs(i, isConnected, visited);
      }
    }
  }

  int findCircleNum(std::vector<std::vector<int>>& isConnected) {
    int n = isConnected.size();
    std::vector<bool> visited(n, false);
    int provinceCount = 0;

    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
        dfs(i, isConnected, visited);
        provinceCount++;
      }
    }

    return provinceCount;
  }
};
