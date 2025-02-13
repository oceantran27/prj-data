/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2007_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2007_CPP
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
  vector<int> findOriginalArray(vector<int>& nums) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    unordered_map<int, int> d2c;
    vector<int> ret;
    for (int i : nums) d2c[i]++;
    if (d2c.find(0) != d2c.end()) {
      if (d2c[0] % 2 != 0) return {};
      ret.insert(ret.end(), d2c[0] / 2, 0);
      d2c.erase(0);
    }

    for (int i : nums) {
      if (d2c.find(i) == d2c.end()) continue;
      int cur = i;
      while (cur % 2 == 0 && d2c.find(cur / 2) != d2c.end()) {
        cur = cur / 2;
      }
      // now cur is the smallest element in the chain
      int need_as_double = 0;
      for (; d2c.find(cur) != d2c.end(); cur *= 2) {
        d2c[cur] -= need_as_double;

        if (d2c[cur] < 0) return {};
        ret.insert(ret.end(), d2c[cur], cur);
        need_as_double = d2c[cur];
        d2c.erase(cur);
      }
      if (need_as_double != 0) return {};
    }
    return ret;
  }
};

#endif
