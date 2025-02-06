#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
// code_report Solution
// https://youtu.be/kCeRKIo_p8w

#include <vector>
#include <algorithm>

using namespace std;

#define FORI(s,n) for(int i = s; i < n; i++)
#define FORJ(s,n) for(int j = s; j < n; j++)

using vi  = vector<int>;
using vvi = vector<vi>;

int minFallingPathSum(vector<vector<int>>& a) {
   int n = a.size();
   vvi dp(n, vi(n));
   dp[0] = a[0];
   FORI (1, n) {
      FORJ (0, n) {
         dp[i][j] = a[i][j] + dp[i - 1][j];
         if (j > 0)     dp[i][j] = min(dp[i][j], a[i][j] + dp[i - 1][j - 1]);
         if (j < n - 1) dp[i][j] = min(dp[i][j], a[i][j] + dp[i - 1][j + 1]);
      }
   }
   return *min_element(dp[n - 1].begin(), dp[n - 1].end());
}
