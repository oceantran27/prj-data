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
    bool canSplitArray(vector<int>& nums, int m) 
    {        
        if (nums.size()<=2) return true;
        for (int i=1; i<nums.size(); i++)
            if (nums[i]+nums[i-1]>=m) return true;
        return false;
    }
};
