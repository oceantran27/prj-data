/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_13_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_13_CPP
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
  int romanToInt(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int sum = 0;
    if (s.length() == 0) {
      return -1;
    } else {
      map<char, int> temp;
      temp.insert({'I', 1});
      temp.insert({'V', 5});
      temp.insert({'X', 10});
      temp.insert({'L', 50});
      temp.insert({'C', 100});
      temp.insert({'D', 500});
      temp.insert({'M', 1000});

      for (int i = 0; i < s.length(); i++) {
        if (temp[s[i]] < temp[s[i + 1]]) {
          sum += temp[s[i + 1]] - temp[s[i]];
          i++;
          continue;
        }
        sum += temp[s[i]];
      }
    }
    return sum;
  }
};

#endif
