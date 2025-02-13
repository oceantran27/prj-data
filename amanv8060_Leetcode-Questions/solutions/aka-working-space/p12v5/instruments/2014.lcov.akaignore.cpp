/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2014_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2014_CPP
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
  int n;
  string s;
  string ans;
  vector<int> cnt;
  string prefix;
  int k;

  bool valid() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (prefix.empty()) return true;
    if (prefix.size() > (n / k)) return false;

    int k1 = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
      if (prefix[j] == s[i]) {
        j++;
        if (j == prefix.size()) {
          k1++;
          j = 0;
        }
      }
    }

    return k1 >= k;
  }

  void dfs() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (valid() == false) return;
    if (ans.size() < prefix.size()) ans = prefix;

    for (char c = 'z'; c >= 'a'; c--) {
      int& d = cnt[c - 'a'];
      if (d < k) continue;
      d -= k;
      prefix.push_back(c);
      dfs();
      prefix.pop_back();
      d += k;
    }
  }

  string longestSubsequenceRepeatedK(string str, int k1) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    n = str.size();
    k = k1;
    cnt = vector<int>(27, 0);

    for (auto c : str) {
      cnt[c - 'a']++;
    }

    for (auto c : str) {
      if (cnt[c - 'a'] < k) continue;
      s.push_back(c);
    }
    n = s.size();
    prefix.reserve(8);
    dfs();
    return ans;
  }
};

#endif
