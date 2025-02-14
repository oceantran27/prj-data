/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0386_LEXICOGRAPHICAL_NUMBERS_0386_LEXICOGRAPHICAL_NUMBERS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0386_LEXICOGRAPHICAL_NUMBERS_0386_LEXICOGRAPHICAL_NUMBERS_CPP
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
    
    void dfs(int i, int n, vector<int> &res) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(i > n)                       return;
        
        res.push_back(i);
        
        for(int j=0; j<=9; j++) {
            dfs(10 * i + j, n, res);    
        }
        
        return;
    }
    
    vector<int> lexicalOrder(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;

        for(int i=1; i<=9; i++) {
            dfs(i, n, res);
        }
        
        return res;
    }
    
};
#endif
