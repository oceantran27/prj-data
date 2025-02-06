#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk

class Solution {
 public:
  int chalkReplacer(vector<int>& chalk, int k) {
    long long tot = 0;
    int n = chalk.size();
    for (int i = 0; i < n; ++i) {
      tot += chalk[i];
      if (tot > k) return i;
    }
    return chalkReplacer(chalk, k % tot);
  }
};
