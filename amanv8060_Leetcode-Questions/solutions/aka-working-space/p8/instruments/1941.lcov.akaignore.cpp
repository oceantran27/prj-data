/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1941_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1941_CPP
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
  bool areOccurrencesEqual(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int character;
    int arr[26] = {};
    for (int i = 0; i < s.length(); i++) {
      character = s[i];
      arr[character - 97]++;
    }

    for (int i = 0; i < 26; i++) {
      if (arr[i] == *max_element(arr, arr + 26) || arr[i] == 0) continue;

      if (arr[i] < *max_element(arr, arr + 26) ||
          arr[i] > *max_element(arr, arr + 26))
        return false;
    }
    return true;
  }
};

#endif
