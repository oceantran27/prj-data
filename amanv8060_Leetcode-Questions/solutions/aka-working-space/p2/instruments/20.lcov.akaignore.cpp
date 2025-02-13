/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_20_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_20_CPP
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
  bool isValid(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        st.push(s[i]);
      else if (s[i] == ')') {
        if (!st.empty() && st.top() == '(')
          st.pop();
        else
          return false;
      } else if (s[i] == ']') {
        if (!st.empty() && st.top() == '[')
          st.pop();
        else
          return false;
      } else if (s[i] == '}') {
        if (!st.empty() && st.top() == '{')
          st.pop();
        else
          return false;
      } else
        return false;
    }
    if (!st.empty()) return false;
    return true;
  }
};
#endif
