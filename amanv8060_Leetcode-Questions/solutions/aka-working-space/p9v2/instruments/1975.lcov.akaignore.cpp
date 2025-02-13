/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1975_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1975_CPP
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
  long long maxMatrixSum(vector<vector<int>>& matrix) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int r = matrix.size(), c = matrix[0].size();

    // we need to find the min number in the matrix and also count of negative
    // numbers in the matrix
    int small = INT_MAX, count = 0;
    long long int sum = 0;

    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        int val = matrix[i][j];
        // finding the smallest absolute value in the matrix
        small = min(small, abs(val));
        // counting the negative numbers
        if (val < 0) count++;
        // finding the sum of all the values
        sum += abs(val);
      }
    }
    // if even number of negatives, then just return sum
    if (count % 2 == 0)
      return sum;
    else
      // subtract the value of the min absolute element
      return sum - 2 * small;
  }
};

#endif
