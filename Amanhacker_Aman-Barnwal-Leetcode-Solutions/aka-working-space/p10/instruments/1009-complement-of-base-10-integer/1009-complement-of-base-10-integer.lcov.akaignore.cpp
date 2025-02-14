/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1009_COMPLEMENT_OF_BASE_10_INTEGER_1009_COMPLEMENT_OF_BASE_10_INTEGER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1009_COMPLEMENT_OF_BASE_10_INTEGER_1009_COMPLEMENT_OF_BASE_10_INTEGER_CPP
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
    
    int bitwiseComplement(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int res = 0, mul = 1;
        
        if(n == 0)                                                      return 1;
        
        while(n > 0) {
            
            int rem = n % 2;
            rem ^= 1;
            
            res += rem * mul;
            mul *= 2;
            
            n = n / 2;
        }
        
        return res;
    }
    
};
#endif
