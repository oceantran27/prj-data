/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_9_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_9_CPP
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
  bool isPalindrome(int x) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    long int temp1 = x, temp2, rev = 0;

    if (x < 0) {
      return false;
    }

    else {
      while (temp1 > 0) {
        temp2 = temp1 % 10;
        rev = rev * 10 + temp2;
        temp1 /= 10;
      }
    }
    if (rev == x)
      return true;
    else
      return false;
  }
};

#endif
