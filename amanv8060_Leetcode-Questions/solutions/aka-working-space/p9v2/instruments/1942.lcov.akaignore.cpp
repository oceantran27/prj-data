/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1942_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1942_CPP
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
  int smallestChair(vector<vector<int>> &times, int targetFriend) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int time = times[targetFriend][0];
    vector<int> arrival(time + 1, -1);

    for (int i = 0; i < times.size(); i++) {
      if (times[i][0] <= time) arrival[times[i][0]] = i;
    }
    int chair = -1;
    for (int i = 1; i <= time; i++) {
      if (arrival[i] != -1) {
        chair++;
        int j = i;
        while (j < time) {
          int next = arrival[j];
          if (next != -1) {
            arrival[j] = -1;
            j = times[next][1];
          } else
            j++;
        }
        if (j == time) break;
      }
    }
    return chair;
  }
};

#endif
