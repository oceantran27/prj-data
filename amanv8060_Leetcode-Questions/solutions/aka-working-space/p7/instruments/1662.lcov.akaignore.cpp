/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1662_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1662_CPP
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
  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int n1 = word1.size();
    int n2 = word2.size();
    string str1;
    string str2;

    for (int i = 0; i < n1; i++) {
      str1 = str1 + word1[i];
    }
    for (int i = 0; i < n2; i++) {
      str2 = str2 + word2[i];
    }
    if (str1 == str2) {
      return true;
    }
    return false;
  }
};

#endif
