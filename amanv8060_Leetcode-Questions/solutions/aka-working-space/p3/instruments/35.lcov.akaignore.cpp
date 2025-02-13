/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_35_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_35_CPP
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
  int searchInsert(vector<int>& a, int target) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int l = 0, r = (int)a.size() - 1, mid, ans = -1;
    while (l <= r) {
      mid = l + (r - l) / 2;
      if (a[mid] == target) return mid;
      if (a[mid] < target) {
        l = mid + 1;
        ans = mid + 1;
      } else {
        ans = mid;
        r = mid - 1;
      }
    }
    return ans;
  }
};

#endif
