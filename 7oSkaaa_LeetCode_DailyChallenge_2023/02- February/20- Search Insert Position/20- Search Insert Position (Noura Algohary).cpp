#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Noura Algohary
// lower_bound returns the first occurrence of a num in nums vector or the position where it shour be if not exist 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto low = lower_bound(nums.begin(), nums.end(), target);
        return low - nums.begin();
    }
};