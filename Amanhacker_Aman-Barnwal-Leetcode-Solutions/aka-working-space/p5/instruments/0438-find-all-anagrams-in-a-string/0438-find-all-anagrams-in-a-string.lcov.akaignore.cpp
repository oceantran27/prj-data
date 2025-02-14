/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_CPP
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
    
    vector<int> findAnagrams(string txt, string pat) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;
	    unordered_map<char, int> mp;
	    
	    for(auto &ch : pat)                     mp[ch]++;
	    int count = mp.size();              // Unique characters in pat
	    
	    int i = 0, j = 0;
	    
	    int k = pat.length();
	    int n = txt.length();
	    
	    while(j < n) {
	        
	        if(mp.find(txt[j]) != mp.end()) {
	            
	            mp[txt[j]]--;
	            
	            if(mp[txt[j]] == 0)             count--;
	        }
	        
	        if(j - i + 1 < k) {
	            j++;
	        }
	        
	        else if(j - i + 1 == k) {
	            
	            if(count == 0) {
	                res.push_back(i);
	            }
	            
	            // Remove ith index
	            if(mp.find(txt[i]) != mp.end()) {
	                
	                mp[txt[i]]++;
	                
	                if(mp[txt[i]] == 1)                          count++;
	            }
	            
	            i++;
	            j++;
	        }
	    }
	    
	    return res;
    }
    
};
#endif
