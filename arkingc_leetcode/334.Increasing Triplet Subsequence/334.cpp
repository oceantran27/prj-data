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
        if(nums.size() < 3) return false;
        
        int min = INT_MAX,max = INT_MAX;
        for(int e : nums){
            if(e <= min) min = e;
            else if(e <= max)    max = e;
            else    return true;
        }
        
        return false;
    }
};