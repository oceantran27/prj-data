/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2013_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2013_CPP
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
class DetectSquares {
 public:
public:
  int arr[1002][1002];
  DetectSquares() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    for (int i = 0; i < 1002; i++) {
      for (int j = 0; j < 1002; j++) {
        arr[i][j] = 0;
      }
    }
  }

  void add(vector<int> point) {
AKA_fCall++; /* LCOV_EXCL_LINE */  arr[point[0]][point[1]]++; }

  int count(vector<int> point) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int p = point[0];
    int q = point[1];
    int ans = 0;
    for (int x = 1; x < 1002; x++) {
      int cnt = 0;
      if (p + x < 1002 && q - x >= 0) {
        cnt = arr[p + x][q] * arr[p + x][q - x] * arr[p][q - x];
        ans += cnt;
      }
      if (p - x >= 0 && q - x >= 0) {
        cnt = arr[p - x][q] * arr[p - x][q - x] * arr[p][q - x];
        ans += cnt;
      }
      if (p - x >= 0 && q + x < 1002) {
        cnt = arr[p - x][q] * arr[p - x][q + x] * arr[p][q + x];
        ans += cnt;
      }
      if (p + x < 1002 && q + x < 1002) {
        cnt = arr[p + x][q] * arr[p + x][q + x] * arr[p][q + x];
        ans += cnt;
      }
    }
    return ans;
  }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */

#endif
