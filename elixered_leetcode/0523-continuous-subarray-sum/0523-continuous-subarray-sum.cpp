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
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        int s = 0;
        for(int i=0; i<nums.size(); i++)
        {
            s += nums[i];
            int rem = s%k;
            if(rem==0 && i>0)
                return true;
            if(map.find(rem)==map.end())
                map[rem] = i;
            else if(i-map[rem]>1) return true;
        }
        return false;
    }
};