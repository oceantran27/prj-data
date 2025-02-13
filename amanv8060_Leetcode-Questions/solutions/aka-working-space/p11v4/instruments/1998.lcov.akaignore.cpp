/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_1998_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_1998_CPP
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
class DSU {
  public:
vector<int> par, rank;
  int n;

 public:
  DSU(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    this->par.resize(n);
    this->rank.resize(n);
    this->n = n;
    for (int i = 0; i < n; i++) par[i] = i;
  }
};

class Solution {
 public:
public:
  vector<int> spf;
  vector<int> getAllFactors(int x) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    vector<int> factors;
    while (x > 1) {
      factors.push_back(spf[x]);
      x /= spf[x];
    }
    return factors;
  }
  void sieve(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    spf.resize(n);
    for (int i = 2; i < n; i++) spf[i] = i;
    for (int i = 2; i * i < n; i++) {
      if (spf[i] == i) {
        for (int j = i * i; j < n; j += i) {
          if (spf[j] > i) spf[j] = i;
        }
      }
    }
  }
};

#endif
