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
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        int sum = 0;
        unordered_map<int,int> map;
        map[0]++;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
            if(map.find(sum-k)!=map.end()) count += map[sum-k];
            map[sum]++;
        }
        
        return count;
    }
};