/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_204_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_204_CPP
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
  int countPrimes(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (n < 2) return 0;
    vector<bool> Prime(n + 1, true);

    Prime[0] = false;
    Prime[1] = false;

    Prime[n] = false;

    for (int p = 2; p * p <= n; p++) {
      if (Prime[p] == true) {
        for (int i = p * p; i <= n; i += p) {
          Prime[i] = false;
        }
      }
    }
    int ans = 0;
    for (auto element : Prime) {
      if (element) {
        ans++;
      }
    }
    return ans;
  }
};

#endif
