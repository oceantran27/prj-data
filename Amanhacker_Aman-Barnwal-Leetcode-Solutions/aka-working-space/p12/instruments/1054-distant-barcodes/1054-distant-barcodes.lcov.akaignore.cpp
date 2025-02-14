/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1054_DISTANT_BARCODES_1054_DISTANT_BARCODES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1054_DISTANT_BARCODES_1054_DISTANT_BARCODES_CPP
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
    
    vector<int> rearrangeBarcodes(vector<int>& v) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;
        
        int n = v.size();
        priority_queue<pair<int, int>> pq;          // 1st arg - Freq, 2nd arg - Element
        
        unordered_map<int, int> u;                  // 1st arg - Element, 2nd arg - Freq
        
        for(auto &x : v)                            u[x]++;
        for(auto &x : u)                            pq.push({x.second, x.first});
        
        pair<int, int> prevEle = pq.top();
        pq.pop();
        
        int prev = prevEle.second;
        int prevFreq = prevEle.first;
        
        res.push_back(prev);

        if(prevFreq >= 2)                              pq.push({prevFreq - 1, prev});
        
        while(pq.empty() == false) {
            
            pair<int, int> temp = pq.top();
            pq.pop();
            
            if(prev != temp.second) {
                
                res.push_back(temp.second);
            
                int freq = temp.first;
                if(freq >= 2)                           pq.push({freq - 1, temp.second});
                
                prev = temp.second;
            }
            
            else if(prev == temp.second){
                
                // Pop the first two max occuring element, and decrease the freq by 1 of 2nd most frequent element
                if(pq.size() >= 1) {
                    
                    pair<int, int> tempSecond = pq.top();
                    pq.pop();
                    
                    int freq2 = tempSecond.first;
                    int ele = tempSecond.second;
                    
                    res.push_back(ele);
                    prev = ele;
                    
                   if(freq2 >= 2)                           pq.push({freq2 - 1, ele});
                
                    // Also, push the 1st temp
                    pq.push(temp);
                }
                
                
            }
           
        }
        
        return res;
    }
    
};
#endif
