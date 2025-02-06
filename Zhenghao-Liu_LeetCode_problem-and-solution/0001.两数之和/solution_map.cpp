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
        unordered_map<int,int> dict;
        int nums_size=nums.size();
        for (int i=0;i<nums_size;++i)
        {
            int temp=target-nums.at(i);
            if (dict.find(temp)!=dict.end())
                return {dict.at(temp),i};
            dict.insert({nums.at(i),i});
        }
        return {};
    }
};
