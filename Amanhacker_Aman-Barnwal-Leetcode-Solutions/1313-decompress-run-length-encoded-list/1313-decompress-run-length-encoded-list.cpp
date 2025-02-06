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
    
    vector<int> decompressRLElist(vector<int>& a) {
    
        vector<int> res;
        int n = a.size();
        
        for(int i=0; i + 1 < n; i += 2) {
            
            int freq = a[i];
            int val = a[i + 1];
            
            // Push val into res freq times
            while(freq--)                               res.push_back(val);
        }
        
        return res;
    }
    
};