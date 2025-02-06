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
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int a = nums.size();
        for(int i = 0; i < a; i++) 
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};