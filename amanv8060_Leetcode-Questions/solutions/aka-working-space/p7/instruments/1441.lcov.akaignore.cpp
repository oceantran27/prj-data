/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1441_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1441_CPP
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
  vector<string> buildArray(vector<int>& target, int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    vector<string> stack;
    int counter = 0;

    for (int i = 1; i <= n; i++) {
      if (target.size() == 0 || counter >= target.size()) {
        return stack;
      }
      stack.push_back("Push");
      if (i != target[counter]) {
        stack.push_back("Pop");
      } else {
        counter++;
      }
    }
    return stack;
  }
};
#endif
