/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2008_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2008_CPP
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
  long long solver(vector<vector<int>>& rides, int i, int n,
                   vector<long long>& dp) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (i == n) return 0;

    long long ans = 0;
    if (dp[i] != -1) return dp[i];

    ans = max(ans, solver(rides, i + 1, n, dp));

    int j = lower_bound(rides.begin() + i + 1, rides.end(), rides[i][1],
                        [](const vector<int>& a, const int val) {
                          return a[0] < val;
                        }) -
            rides.begin();

    ans = max(ans, solver(rides, j, n, dp) +
                       ((long long)rides[i][2] + rides[i][1] - rides[i][0]));

    return dp[i] = ans;
  }
  long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int l = rides.size();
    sort(
        rides.begin(), rides.end(),
        [](const vector<int>& a, const vector<int>& b) { return a[0] < b[0]; });

    vector<long long> dp(l + 1, -1);

    return solver(rides, 0, l, dp);
  }
};

#endif
