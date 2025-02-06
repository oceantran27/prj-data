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
    int maxDiff(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int buy=nums[0],diff=0;
        for(auto &x:nums){
            if(x<buy) buy=x;
            if(x-buy>diff) diff=x-buy;
        }
        return diff;
    }
};