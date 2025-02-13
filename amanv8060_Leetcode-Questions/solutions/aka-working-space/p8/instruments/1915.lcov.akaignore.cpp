/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1915_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1915_CPP
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
  long long wonderfulSubstrings(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int n = s.size();
    map<long long, long long> mp;
    mp[0] = 1;
    long long count = 0;
    long long mask = 0;
    for (int i = 0; i < n; i++) {
      mask = mask ^ (1 << (s[i] - 'a'));
      if (mp.count(mask)) {
        count += mp[mask];
      }
      for (char j = 'a'; j <= 'j'; j++) {
        long long x = mask ^ (1 << (j - 'a'));
        if (mp.count(x)) {
          count += mp[x];
        }
      }
      mp[mask]++;
    }
    return count;
  }
};

#endif
