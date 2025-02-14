/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0338_COUNTING_BITS_0338_COUNTING_BITS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0338_COUNTING_BITS_0338_COUNTING_BITS_CPP
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
    
    vector<int> countBits(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;
        
        if(n == 0)                          return {0};
        if(n == 1)                          return {0, 1};
        
        res.push_back(0);
        res.push_back(1);
        
        for(int i=2; i<=n; i++) {
            
            // Binary Representation of number i
            // No.of 1's bits in number i
            
            int num = i, count = 0;
            
            while(num > 0) {
                count += (num % 2);
                num = num / 2;
            }
            
            res.push_back(count);
        }
        
        return res;
    }
    
};
#endif
