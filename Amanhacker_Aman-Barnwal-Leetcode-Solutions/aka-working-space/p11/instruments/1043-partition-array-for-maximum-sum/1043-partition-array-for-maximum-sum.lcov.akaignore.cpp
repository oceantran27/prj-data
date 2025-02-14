/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_CPP
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
  
    int helperMaxSum(vector<int> &a, int n, int k, int pos, int &res, vector<int> &dp) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        // Base Condition
        if(pos >= n)                                    return 0;
        if(pos < n && dp[pos] != -1)                    return dp[pos];
        
        int maxEle = 0;
        
        // For each position pos, increase your subarray size i from 0 to k - 1, tracking the max value maxEle so far. 
        // The sum of the subarray is maxEle * (i + 1).

        for(int i = 0; i < k && pos + i < n; i++) {
           
            maxEle = max(maxEle, a[pos + i]);
            
            int temp = ( maxEle * (i + 1) ) + helperMaxSum(a, n, k, pos + i + 1, res, dp);
            res = max(res, temp);
        }
        
        // Use memoisation to track the maximum sum for the position (dp).
        dp[pos] = res;
        return res;
    }
    
    int maxSumAfterPartitioning(vector<int>& a, int k) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int n = a.size();
        if(n == 0)                                      return 0;
        
        int pos = 0, res = 0;
        vector<int> dp(n + 1, -1);
        
        return helperMaxSum(a, n, k, pos, res, dp);
    }
    
};
#endif
