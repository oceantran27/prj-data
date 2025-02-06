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
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int nums_size=nums.size();
        for (int i=0;i<nums_size-1;i=i+2)
            if (nums.at(i)!=nums.at(i+1))
                return nums.at(i);
        return nums.at(nums_size-1);
    }
};
