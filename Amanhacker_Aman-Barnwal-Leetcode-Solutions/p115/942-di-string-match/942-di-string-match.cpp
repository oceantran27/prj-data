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
    
    vector<int> diStringMatch(string s) {
    
        vector<int> res;
        
        int n = s.length();
        res.resize(n + 1);
        
        int low = 0, high = n;
        
        for(int i=0; i<n; i++) {
            
            if(s[i] == 'I')                     res[i] = low++;
            else                                res[i] = high--;
        }
        
        res[n] = low;
        return res;
    }
    
};