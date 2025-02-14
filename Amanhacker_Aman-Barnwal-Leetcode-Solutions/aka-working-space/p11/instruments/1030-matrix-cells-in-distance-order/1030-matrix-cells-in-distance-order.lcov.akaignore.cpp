/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_CPP
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
    
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<vector<int>> res;
        
        vector<pair<int, pair<int, int>>> v;            // 1st dist - Dist, 2nd arg - co-ordinate
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                
                int dist = abs(i -rCenter) + abs(j - cCenter);
                v.push_back({dist, {i, j}});
            }
        }
        
        sort(v.begin(), v.end());
        
        vector<int> temp;
        
        for(auto &x : v) {
        
            temp.push_back(x.second.first);
            temp.push_back(x.second.second);
            
            res.push_back(temp);
            temp.clear();
        }
        
        return res;
    }
    
};
#endif
