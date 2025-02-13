/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_42_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_42_CPP
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
  int trap(vector<int>& a) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int n = a.size();
    if (n == 0) return 0;
    vector<int> lvect, rvect, vect;
    int left = a[0];
    for (int i = 0; i < n; i++) {
      left = max(left, a[i]);
      lvect.push_back(left);
    }
    int right = a[n - 1];
    for (int i = n - 1; i >= 0; i--) {
      right = max(right, a[i]);
      rvect.push_back(right);
    }
    reverse(rvect.begin(), rvect.end());
    for (int i = 0; i < n; i++) {
      vect.push_back(min(lvect[i], rvect[i]) - a[i]);
    }
    int sum = 0;
    sum = accumulate(vect.begin(), vect.end(), sum);
    return sum;
  }
};
#endif
