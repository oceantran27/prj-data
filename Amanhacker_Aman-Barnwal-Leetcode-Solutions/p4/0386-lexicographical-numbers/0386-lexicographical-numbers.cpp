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
    
    void dfs(int i, int n, vector<int> &res) {
        
        if(i > n)                       return;
        
        res.push_back(i);
        
        for(int j=0; j<=9; j++) {
            dfs(10 * i + j, n, res);    
        }
        
        return;
    }
    
    vector<int> lexicalOrder(int n) {
    
        vector<int> res;

        for(int i=1; i<=9; i++) {
            dfs(i, n, res);
        }
        
        return res;
    }
    
};