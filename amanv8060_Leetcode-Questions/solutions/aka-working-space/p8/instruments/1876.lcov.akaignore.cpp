/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1876_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1876_CPP
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
  int countGoodSubstrings(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int count = 0;
    vector<char> v;

    if (s.length() < 3) {
      return 0;
    } else {
      for (int i = 0; i < s.length() - 2; i++) {
        for (int j = i; j < i + 3; j++) {
          v.push_back(s[j]);
        }

        sort(v.begin(), v.end());

        auto ip = unique(v.begin(), v.begin() + v.size());

        v.resize(distance(v.begin(), ip));

        if (v.size() == 3) {
          count++;
        }
        v.clear();
      }
      return count;
    }
  }
};

#endif
