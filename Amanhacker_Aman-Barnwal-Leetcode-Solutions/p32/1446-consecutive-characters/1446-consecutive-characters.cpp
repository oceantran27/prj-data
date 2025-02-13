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
    
    int maxPower(string s) {
    
        int res = 1;
        int n = s.length();
        
        for(int i=0; i<n; i++) {
            
            // Substring starts at index i
            int k = i;
            while(k < n-1 && s[k] == s[k+1]) {
                k++;
            }
            
            int end = k;

            // Substring is from i to end
            res = max(res, end - i + 1);
        }
        
        return res;
    }
    
};