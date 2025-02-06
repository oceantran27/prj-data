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
public:
  vector<int> dp;
  bool divisorGame(int N) {
    for (int i = 1; i <= N; i++) {
      dp.push_back(false);
      for (int j = 1; j < i; j++) {
        if (i % j == 0 && !dp[i - j - 1]) {
          dp[i - 1] = true;
          break;
        }
      }
    }
    return dp[N - 1];
  }
};
