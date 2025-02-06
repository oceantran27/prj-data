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
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hm;
        for(int i=0; i<nums.size(); i++)
        {
            if(hm.find(nums[i])==hm.end())
                hm[nums[i]] = i;
            else
            {    if(abs(hm.find(nums[i])->second-i) <= k)
                    return true;
             else
                 hm[nums[i]] = i;
            }
            
        }
        return false;
    }
};