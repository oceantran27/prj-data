#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/unique-binary-search-trees

class Solution {
 public:
  int numTrees(int n) {
    vector<int> cnt(n + 1, 0);
    cnt[0] = 1;

    for (int i = 1; i <= n; ++i)
      for (int j = 1; j <= i; ++j) cnt[i] += cnt[j - 1] * cnt[i - j];
    return cnt[n];
  }
};
