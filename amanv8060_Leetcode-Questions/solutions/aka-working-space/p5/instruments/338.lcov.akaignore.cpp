/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_338_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_338_CPP
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
// Approach: Used Brian Kernighan’s Algorithm for this question.
// Example-   n =  10 (1010)
//    count = 0

//    Since 10 > 0, subtract by 1 and do bitwise & with (9-1)
//    n = 10&9  (1010 & 1001)
//    n = 8
//    count  = 1

//    Since 8 > 0, subtract by 1 and do bitwise & with (8-1)
//    n = 8&7  (1000 & 0111)
//    n = 0
//    count = 2

//    Since n = 0, return count which is 2 now

#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
public:
  int countthesetbits(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int c = 0;
    while (n) {
      n = n & (n - 1);
      c++;
    }
    return c;
  }
  vector<int> countBits(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    vector<int> result;
    for (int i = 0; i <= n; i++) {
      result.push_back(countthesetbits(i));
    }

    return result;
  }
};
#endif
