#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Ahmed Hossam

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // get the index of the first element greater than or equal target
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};
