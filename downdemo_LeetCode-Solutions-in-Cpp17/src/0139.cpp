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
  bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> wordSet{wordDict.begin(), wordDict.end()};
    vector<bool> dp(s.size() + 1);
    dp[0] = true;
    for (int i = 1; i < dp.size(); ++i) {
      for (int j = 0; j < i; ++j) {
        if (dp[j] && wordSet.count(s.substr(j, i - j))) {
          dp[i] = true;
          break;
        }
      }
    }
    return dp.back();
  }
};
