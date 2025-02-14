/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1056_CONFUSING_NUMBER_1056_CONFUSING_NUMBER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1056_CONFUSING_NUMBER_1056_CONFUSING_NUMBER_CPP
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
  
    bool confusingNumber(int num) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        string s = to_string(num);
        
        int n = s.length();
        string res = s;
        
        for(int i=0; i<n; i++) {
           
            if(s[i] == '6')                                         s[i] = '9';
            else if(s[i] == '9')                                    s[i] = '6';
            else if(s[i] == '0' || s[i] == '8' || s[i] == '1')      continue;
            else                                                    return false;
        }
        
        reverse(res.begin(), res.end());
        return (res != s);
    }
    
};
#endif
