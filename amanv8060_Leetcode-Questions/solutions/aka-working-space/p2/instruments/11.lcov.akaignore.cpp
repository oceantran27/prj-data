/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_11_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_11_CPP
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
using namespace std;

#ifndef NULL
#define NULL 0
#endif

class Solution {
 public:
public:
  int maxArea(vector<int>& height) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int s = 0;
    int e = height.size() - 1;

    int water = INT_MIN;
    while (s < e) {
      water = max(water, min(height[s], height[e]) * (e - s));

      if (height[s] < height[e])
        s++;
      else
        e--;
    }

    return water;
  }
};

#endif
