/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1982_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1982_CPP
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
  vector<int> recoverArray(int n, vector<int>& sums) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    sort(sums.begin(), sums.end());

    vector<int> ans;
    while (n--) {
      int diff = sums[1] - sums[0];
      unordered_map<int, int> freq;
      vector<int> ss0, ss1;
      bool on = false;
      for (auto& x : sums)
        if (!freq[x]) {
          ss0.push_back(x);
          freq[x + diff]++;
          if (x == 0) on = true;
        } else {
          ss1.push_back(x);
          freq[x]--;
        }
      if (on) {
        ans.push_back(diff);
        sums = ss0;
      } else {
        ans.push_back(-diff);
        sums = ss1;
      }
    }
    return ans;
  }
};

#endif
