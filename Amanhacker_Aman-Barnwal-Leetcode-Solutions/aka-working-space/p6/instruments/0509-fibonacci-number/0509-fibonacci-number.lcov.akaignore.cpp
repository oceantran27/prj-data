/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0509_FIBONACCI_NUMBER_0509_FIBONACCI_NUMBER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0509_FIBONACCI_NUMBER_0509_FIBONACCI_NUMBER_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
public:
    
    int fib(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> dp(n + 1, 0);
        
        if(n <= 1)                                  return n;
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i=2; i<=n; i++)                     dp[i] = dp[i-1] + dp[i-2];
        
        return dp[n];
    }
    
};
#endif
