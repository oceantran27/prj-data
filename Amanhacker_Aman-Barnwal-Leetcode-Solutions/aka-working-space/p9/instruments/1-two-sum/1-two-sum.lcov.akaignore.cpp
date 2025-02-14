/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_1_TWO_SUM_1_TWO_SUM_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_1_TWO_SUM_1_TWO_SUM_CPP
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
    
    vector<int> twoSum(vector<int>& v, int tar) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;
        int n = v.size();
        
        for(int i=0; i<n-1; i++) {
            
            auto it = find(v.begin()+i+1, v.end(), tar - v[i]);
            
            if(it != v.end()) {
                
                int ind = it - v.begin();
                
                res.push_back(ind);
                res.push_back(i);
                
                return res;
            }
        }
        
        return res;
    }
    
};
#endif
