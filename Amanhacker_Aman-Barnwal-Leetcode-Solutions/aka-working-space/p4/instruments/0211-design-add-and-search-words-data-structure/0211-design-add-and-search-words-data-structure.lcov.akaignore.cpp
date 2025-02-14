/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_CPP
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

class WordDictionary {
public:
public:
    
    vector<string> v;

    WordDictionary() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
    }
    
    void addWord(string word) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        v.push_back(word);
        return;
    }
    
    bool search(string word) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
       
        // Regex Expression
        
        int len = word.length();
        
        for(auto &str : v) {
            
            if(str.length() == len) {
                
                bool flag = true;

                for(int i=0; i<len; i++) {
                
                    if(word[i] != '.') {
                        
                        if(str[i] != word[i]) {
                            flag = false;
                            i = len;
                        }
                    }
                }
                
                if(flag == true)                        return true;
            }
        }
        
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
#endif
