/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1995_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1995_CPP
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
  int countQuadruplets(vector<int>& nums) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int res = 0;
    int len = nums.size();

    unordered_map<int, int> count;
    count[nums[len - 1] - nums[len - 2]] = 1;

    for (int b = len - 3; b >= 1; b--) {
      for (int a = b - 1; a >= 0; a--) {
        res += count[nums[a] + nums[b]];
      }

      for (int x = len - 1; x > b; x--) {
        count[nums[x] - nums[b]]++;
      }
    }

    return res;
  }
};

#endif
