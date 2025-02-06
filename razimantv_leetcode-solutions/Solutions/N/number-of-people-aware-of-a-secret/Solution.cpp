#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-people-aware-of-a-secret

class Solution {
 public:
  int peopleAwareOfSecret(int n, int delay, int forget) {
    const int MOD = 1'000'000'007;
    vector<int> knows(n + 1), newly(n + 1);
    newly[1] = 1;
    for (int i = 1; i <= n; ++i) {
      for (int j = i; j <= n and j < i + forget; ++j) {
        knows[j] += newly[i];
        if (knows[j] >= MOD) knows[j] -= MOD;
      }

      for (int j = i + delay; j <= n and j < i + forget; ++j) {
        newly[j] += newly[i];
        if (newly[j] >= MOD) newly[j] -= MOD;
      }
    }

    return knows.back();
  }
};
