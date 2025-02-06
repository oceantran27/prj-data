#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Question: https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int> mp;
        int curr = 0;
        
        for(int n : nums){
            curr += n;
            if(curr == k)
                cnt++;
            if(mp[curr-k])
                cnt += mp[curr-k];
            if(mp[curr])
                mp[curr] += 1;
            else
                mp[curr] = 1;
        }
        
        return cnt;
    }
};