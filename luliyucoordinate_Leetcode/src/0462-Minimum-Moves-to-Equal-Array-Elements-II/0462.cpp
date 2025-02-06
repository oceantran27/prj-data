#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    int minMoves2(vector<int>& nums) 
    {
        int n = nums.size();
        nth_element(nums.begin(), nums.begin() + n/2, nums.end());
        int x = nums[n / 2], res = 0;
        for_each(nums.begin(), nums.end(), [&](const int& num){
           res += abs(num - x); 
        });
        return res;
    }
};