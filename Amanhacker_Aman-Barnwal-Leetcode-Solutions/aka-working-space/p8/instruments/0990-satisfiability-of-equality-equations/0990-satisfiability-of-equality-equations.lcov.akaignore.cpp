/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_0990_SATISFIABILITY_OF_EQUALITY_EQUATIONS_CPP
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
    
    void dfs(char node1, char dest, unordered_map<char, vector<char>> &adj, unordered_map<char, int> &vis, bool &flag) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(flag == true)                            return;
        
        vis[node1] = 1;
        
        if(node1 == dest) {
            flag = true;
            return;
        }
        
        for(auto &ch : adj[node1]) {
            if(vis[ch] == 0) {
                dfs(ch, dest, adj, vis, flag);
            }
        }
        
        return;
    }
    
    bool equationsPossible(vector<string>& equations) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        unordered_map<char, vector<char>> adj;
        int n = equations.size();
        
        for(auto &x : equations) {
            
            string s = x;
            
            if(s[1] == '=') {
                adj[s[0]].push_back(s[3]);
                adj[s[3]].push_back(s[0]);
            }
        }
        
        for(auto &x : equations) {
            
            if(x[1] == '!') {
                
                char node1 = x[0];
                char node2 = x[3];
                
                // Check whether node1 and node2 are connected by any chance
                bool flag = false;
                unordered_map<char, int> vis;
                
                dfs(node1, node2, adj, vis, flag);
                vis.clear();
                
                if(flag == true)                        return false;
            }
        }
        
        return true;
    }
    
};
#endif
