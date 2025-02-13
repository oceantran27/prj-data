/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1986_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1986_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
public:
  int minSessions(vector<int>& tasks, int sessionTime) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    const int N = tasks.size();
    const int INF = 1e9;
    vector<pair<int, int>> dp(1 << N, {INF, INF});
    dp[0] = {0, INF};
    for (int mask = 1; mask < (1 << N); ++mask) {
      pair<int, int> best = {INF, INF};
      for (int i = 0; i < N; ++i) {
        if (mask & (1 << i)) {
          pair<int, int> cur = dp[mask ^ (1 << i)];
          if (cur.second + tasks[i] > sessionTime) {
            cur = {cur.first + 1, tasks[i]};
          } else
            cur.second += tasks[i];
          best = min(best, cur);
        }
      }
      dp[mask] = best;
    }
    return dp[(1 << N) - 1].first;
  }
};

#endif
