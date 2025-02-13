/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_4_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_4_CPP
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
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int n = nums1.size() + nums2.size();

    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    sort(nums1.begin(), nums1.end());

    if (n % 2 == 0) {
      return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
    } else {
      return nums1[n / 2];
    }
  }
};

#endif
