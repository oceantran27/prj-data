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
    vector<int> twoSum(vector<int>& nums, int target) {
        map<long long,int> map;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            long long curr = nums[i];
            if(map.find(target-curr)!=map.end())
                return {i,map[target-curr]};
            map[curr] = i;
        }
        return {-1,-1};
    }
};