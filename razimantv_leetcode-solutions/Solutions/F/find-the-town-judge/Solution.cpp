#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-town-judge

class Solution {
 public:
  int findJudge(int N, vector<vector<int>>& trust) {
    vector<int> degree(N + 1, 0);

    for (auto elem : trust) {
      degree[elem[0]]--;
      degree[elem[1]]++;
    }

    for (int i = 1; i <= N; ++i) {
      if (degree[i] == N - 1) return i;
    }
    return -1;
  }
};
