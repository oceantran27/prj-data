/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0096_UNIQUE_BINARY_SEARCH_TREES_0096_UNIQUE_BINARY_SEARCH_TREES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0096_UNIQUE_BINARY_SEARCH_TREES_0096_UNIQUE_BINARY_SEARCH_TREES_CPP
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
    
    int numTrees(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        // We have to find the no of structurally unique BSTs which has exactly n nodes of unique values from [1, n]
        
        // For each i in [1, n], consider each i as root node
        
        // Let's say, the left child of root node i will give us total c1 unique BST, 
        // and right child gives c2 unique BST.
        
        // So, the total no of unique BSTs considering node i as root is c1 * c2
        
        // If n = 4 i.e [1, 2, 3, 4]
        // No of unique BSTs = c0 * c3 + c1 * c2 + c2 * c1 + c3 * c0
        
        // I.e We just need to calculate catalan number
        // Cn = for i in [0, n]         C(i) * C(n - i - 1)
        
        vector<int> cat(n + 1, 0);
        
        cat[0] = 1;
        cat[1] = 1;
        
        if(n <= 1)                      return cat[n];
        
        for(int i=2; i<=n; i++) {
            
            cat[i] = 0;             
            
            for(int j=0; j<i; j++)      cat[i] += cat[j] * cat[i - j - 1];
        }
        
        return cat[n];
    }
    
};
#endif
