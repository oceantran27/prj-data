/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1046_LAST_STONE_WEIGHT_1046_LAST_STONE_WEIGHT_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1046_LAST_STONE_WEIGHT_1046_LAST_STONE_WEIGHT_CPP
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
    
    int lastStoneWeight(vector<int>& v) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        // Form Max Heap
        priority_queue<int> pq;
        int n = v.size();
        
        for(auto &x : v)                            pq.push(x);
        
        while(pq.empty() == false) {
            
            if(pq.size() == 1)                      return pq.top();
            
            int t1 = pq.top();
            pq.pop();
            
            int t2 = pq.top();
            pq.pop();
            
            if(t1 != t2)                            pq.push(abs(t1 - t2));
        }
        
        return 0;
    }
    
};
#endif
