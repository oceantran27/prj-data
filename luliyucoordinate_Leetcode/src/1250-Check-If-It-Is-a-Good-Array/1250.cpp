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
    bool isGoodArray(vector<int>& nums) 
    {
        return accumulate(nums.begin(), nums.end(), nums[0], gcd<int, int>) == 1;
    }
};