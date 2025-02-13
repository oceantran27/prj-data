/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2012_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2012_CPP
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
  int sumOfBeauties(vector<int>& nums) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (nums.size() == 0) return 0;

    int sum = 0;

    int left = nums[0];
    vector<int> temp = nums;
    sort(temp.begin() + 2, temp.end());
    int right = temp[2];

    for (int i = 1; i <= nums.size() - 2; i++) {
      int maxim = 0;

      if (nums[i - 1] > left) left = nums[i - 1];

      right = temp[i + 1];

      if (nums[i] > left && nums[i] < right)
        maxim = max(maxim, 2);
      else if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1])
        maxim = max(maxim, 1);
      sum += maxim;
    }
    return sum;
  }
};
#endif
