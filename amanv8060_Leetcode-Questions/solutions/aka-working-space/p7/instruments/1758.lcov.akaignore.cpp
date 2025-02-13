/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1758_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1758_CPP
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
  int minOperations(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int count = 0;
    int n = s.length();
    if (s[0] == '0') {
      for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && s[i - 1] == '1') {
          count++;
        } else if (i % 2 == 1 && s[i - 1] == '0') {
          count++;
        }
      }
    } else {
      for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && s[i - 1] == '0') {
          count++;
        }
        if (i % 2 == 1 && s[i - 1] == '1') {
          count++;
        }
      }
    }

    return min(count, n - count);
  }
};

#endif
