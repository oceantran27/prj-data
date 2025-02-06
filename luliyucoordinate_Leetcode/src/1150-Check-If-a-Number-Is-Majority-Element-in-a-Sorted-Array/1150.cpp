#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    bool isMajorityElement(vector<int>& nums, int target) 
    {
        int cnt = 0;
        for (auto i : nums) if (i == target) cnt++;
        return cnt > nums.size() / 2;
    }
};