/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1881_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1881_CPP
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
  string maxValue(string n, int x) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (n[0] == '-') {
      bool gg = false;
      for (int i = 1; i < n.size(); i++) {
        if (n[i] > x + '0') {
          n.insert(n.begin() + i, x + '0');
          gg = true;
          break;
        }
      }
      if (gg == false) {
        n.push_back(x + '0');
      }
    } else {
      bool gg = false;
      for (int i = 0; i < n.size(); i++) {
        if (n[i] < x + '0') {
          n.insert(n.begin() + i, x + '0');
          gg = true;
          break;
        }
      }
      if (gg == false) {
        n.push_back(x + '0');
      }
    }
    return n;
  }
};

#endif
