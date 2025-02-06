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
    
    int missingNumber(vector<int>& nums) {
    
        map<int, int> mp;
        int n = nums.size();
        int maxi = INT_MIN;
        
        for(auto &x : nums) {
            mp[x]++;            
            maxi = max(maxi, x);
        }   
        
        for(int i=0; i<=maxi; i++) {
            if(mp[i] == 0)                      return i;
        }
        
        return maxi + 1;
    }
    
};