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
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3){ 
            return false;
        }
        int x = INT_MAX, y = INT_MAX;
        for(int i : nums) {
            if(i <= x)
                x = i;           
            else if(i <= y)    
                y = i;           
            else            
                return true;   
        }
        return false;
    }
};