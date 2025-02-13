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
   
    int secondHighest(string s) {
    
        int res = -1;
        set<int> dig;
        
        for(auto &x : s) {
            if(x >= '0' && x <= '9')                    dig.insert((int)(x - '0'));
        }
        
        if(dig.size() >= 2) {
            
            auto it = dig.end();
            
            it--;
            it--;
            
            return *it;
        }                                
        
        return res;
    }
    
};