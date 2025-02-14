/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_CPP
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
    
    int maxProfit(vector<int>& prices) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int res = INT_MIN;
        int n = prices.size();
        
        vector<int> maxPrice(n);
        int maxi = INT_MIN;
        
        for(int i=n-1, k=n-1; i>=0; i--) {
            maxi = max(maxi, prices[i]);
            maxPrice[k--] = maxi;
        }
        
        for(int i=0; i<n; i++) {
            res = max(res, maxPrice[i] - prices[i]);
        }
        
        return res;
    }
    
};
#endif
