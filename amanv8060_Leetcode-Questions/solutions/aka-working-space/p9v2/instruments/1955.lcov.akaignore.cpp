/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1955_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1955_CPP
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
  int countSpecialSubsequences(vector<int>& nums) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    vector<long long> arr(3, 0);
    int n = nums.size();
    int M = 1e9 + 7;

    for (int i = 0; i < n; i++) {
      if (nums[i] == 0)
        arr[0] = ((arr[0] * 2) % M + 1) % M;
      else if (nums[i] == 1) {
        arr[1] = (arr[0] % M + (arr[1] * 2) % M) % M;
      } else {
        arr[2] = (arr[1] % M + (arr[2] * 2) % M) % M;
      }
    }

    return arr[2] % M;
  }
};

#endif
