/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0724_FIND_PIVOT_INDEX_0724_FIND_PIVOT_INDEX_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0724_FIND_PIVOT_INDEX_0724_FIND_PIVOT_INDEX_CPP
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
    
    int pivotIndex(vector<int>& a) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int n = a.size();
        
        int leftSum = 0, rightSum = 0, sum = 0;
        
        for(int i=0; i<n; i++)              sum += a[i];
        
        for(int i=0; i<n; i++) {
            
            rightSum = sum - leftSum - a[i];
            if(leftSum == rightSum)         return i;
            
            leftSum += a[i];
        }
        
        return -1;
    }
    
};
#endif
