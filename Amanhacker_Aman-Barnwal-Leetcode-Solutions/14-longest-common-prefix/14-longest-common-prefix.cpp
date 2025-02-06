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
    
    string longestCommonPrefix(vector<string>& s) {
    
        string res = "";
        int n = s.size();
        
        int mini = INT_MAX;
        
        for(auto &x : s) {
            int t = x.length();
            mini = min(mini, t);
        }   
        
        int ind = 0;
        
        while(mini--) {
            
            bool flag = true;
            
            for(int i=1; i<n; i++) {
                if(s[i][ind] != s[0][ind]) {
                    flag = false;
                    break;
                }
            }    
            
            if(flag == true)            res += s[0][ind];
            else                        break; 
            
            ind++;
        }
        
        return res;
    }
    
};