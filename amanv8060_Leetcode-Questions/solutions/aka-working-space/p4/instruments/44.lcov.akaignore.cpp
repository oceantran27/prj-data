/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_44_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_44_CPP
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
  bool isMatch(string str, string pattern) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int m = pattern.size();
    int n = str.size();

    bool dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++) {
      for (int j = 0; j < m + 1; j++) {
        dp[i][j] = false;
      }
    }
    dp[0][0] = true;

    for (int i = 1; i <= m; i++) {
      if (pattern[i - 1] == '*') dp[0][i] = dp[0][i - 1];
    }
    for (int i = 1; i < n + 1; i++) {
      for (int j = 1; j < m + 1; j++) {
        if (str[i - 1] == pattern[j - 1] || pattern[j - 1] == '?')
          dp[i][j] = dp[i - 1][j - 1];
        else if (pattern[j - 1] == '*')
          dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
      }
    }
    return dp[n][m];
  }
};

#endif
