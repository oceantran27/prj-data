/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_CPP
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
    
    string removeDuplicates(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        string res = "";
        
        stack<char> w;
        
        for(int i=0; i<s.length(); i++) {
            
            if(w.empty() == true)                           w.push(s[i]);
            else {
                
                char top = w.top();
                
                if(top == s[i])                             w.pop(); 
                else                                        w.push(s[i]);
            }
        }
        
        while(w.empty() == false) {
            res += w.top();
            w.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
};
#endif
