/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0005_LONGEST_PALINDROMIC_SUBSTRING_0005_LONGEST_PALINDROMIC_SUBSTRING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0005_LONGEST_PALINDROMIC_SUBSTRING_0005_LONGEST_PALINDROMIC_SUBSTRING_CPP
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
    
    string longestPalindrome(string s) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        string res = "";
        int n = s.length();
        
        int maxi = 0;
        
        vector<vector<int>> dp(n, vector<int>(n, -1));
        
        // row - startIndex, column - endIndex
        
        // 1-length string
        for(int i=0; i<n; i++)                      dp[i][i] = 1;
        
        res = s[0];
        
        for(int i=n-1; i>=0; i--) {
            for(int j=i+1; j<n; j++) {
                
                // String from index [i, j]
                if(s[i] == s[j]) {
                    
                    if(j - i + 1 == 2 || dp[i + 1][j - 1] == 1) {

                        // If substring from [i+1, j-1] is a palindrome and if s[i] == s[j], then substring from [i, j] is also a palindrome

                        dp[i][j] = 1;
                        int len = j - i + 1;

                        if(len > maxi) {
                            maxi = len;
                            res = s.substr(i, len);
                        }
                    }
                }
            }
        }
        
        return res;
    }
    
};
#endif
