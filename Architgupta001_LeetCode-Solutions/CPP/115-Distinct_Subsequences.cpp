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
  int numDistinct(string s, string t) {
    const int m = s.length();
    const int n = t.length();
    vector<long> dp(n + 1);
    dp[0] = 1;

    for (int i = 1; i <= m; ++i)
      for (int j = n; j >= 1; --j)
        if (s[i - 1] == t[j - 1])
          dp[j] += dp[j - 1];

    return dp[n];
  }
};
