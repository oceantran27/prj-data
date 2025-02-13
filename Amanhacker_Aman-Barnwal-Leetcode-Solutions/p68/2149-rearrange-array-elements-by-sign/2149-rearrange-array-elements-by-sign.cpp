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
    
    vector<int> rearrangeArray(vector<int>& a) {
    
        vector<int> res;
        
        int n = a.size();
        res.resize(n);
        
        int i = 0;
        
        for(auto &x : a) {
            if(x > 0) {
                res[i] = x;                
                i += 2;
            }   
        }
        
        i = 1;
        
        for(auto &x : a) {
            if(x < 0) {
                res[i] = x;
                i += 2;
            }
        }
        
        return res;
    }
    
};