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
    int removeElement(vector<int>& nums, int val) {
        int i, occurred = 0;
        for(i = 0; i < nums.size(); ++i)
        {
        	if(nums[i] != val)
        		nums[i-occurred] = nums[i];
        	else
        		++occurred;
        }
        return nums.size()-occurred;
    }
};