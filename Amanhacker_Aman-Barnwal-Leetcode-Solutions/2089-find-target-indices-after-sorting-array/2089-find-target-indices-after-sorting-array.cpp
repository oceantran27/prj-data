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
    
    vector<int> targetIndices(vector<int>& a, int tar) {
    
        vector<int> res;
        
        int n = a.size();
        sort(a.begin(), a.end());
        
        for(int i=0; i<n; i++) {
            if(a[i] == tar)                         res.push_back(i);
        }
        
        return res;
    }
    
};