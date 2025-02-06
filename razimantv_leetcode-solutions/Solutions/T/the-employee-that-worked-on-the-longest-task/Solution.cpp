#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/

class Solution {
 public:
  int hardestWorker(int n, vector<vector<int>>& logs) {
    int best = 0, bestval = 0;
    for (int i = 0, t = 0; i < logs.size(); ++i) {
      int curval = logs[i][1] - t;
      if (curval > bestval or (curval == bestval and logs[i][0] < best))
        bestval = curval, best = logs[i][0];
      t = logs[i][1];
    }
    return best;
  }
};
