/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_10_REGULAR_EXPRESSION_MATCHING_10_REGULAR_EXPRESSION_MATCHING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_10_REGULAR_EXPRESSION_MATCHING_10_REGULAR_EXPRESSION_MATCHING_CPP
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
    
    /** Instrumented function isMatch(string,string) */
bool isMatch(string s, string p) /* << Aka begin of function bool isMatch(string s, string p) >> */
{AKA_mark("Calling: .\\p9\\10-regular-expression-matching\\10-regular-expression-matching.cpp\\Solution\\isMatch(string,string)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===276###eois===308###lif===2###soif===50###eoif===82###ins===true###function===.\\p9\\10-regular-expression-matching\\10-regular-expression-matching.cpp\\Solution\\isMatch(string,string)");return regex_match(s, regex(p));
    }
    
};
#endif
