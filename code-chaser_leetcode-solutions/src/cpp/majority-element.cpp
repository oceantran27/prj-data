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
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>(nums.size()/2)){
                ans=nums[i];
            }
        }
        return ans;
    }
};
