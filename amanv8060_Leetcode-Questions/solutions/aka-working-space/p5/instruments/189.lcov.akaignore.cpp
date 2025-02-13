/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_189_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_189_CPP
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
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
  return b == 0 ? a : gcd(b, a % b);
}

class Solution {
 public:
public:
  void rotate(vector<int> &nums, int k) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int n = nums.size();
    for (int i = 0; i < gcd(n, k); ++i) {
      for (int ii = (i + k) % n; i != ii; ii = (ii + k) % n) {
        swap(nums[i], nums[ii]);
      }
    }
  }
};

#endif
