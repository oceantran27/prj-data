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
    
    int majorityElement(vector<int>& nums) {
    
        int res;
        int n = nums.size();
        
        unordered_map<int, int> mp;
        
        for(auto &x : nums) {
            mp[x]++;
            if(mp[x] > n / 2)               return x;
        }   
        
        return -1;
    }
    
};