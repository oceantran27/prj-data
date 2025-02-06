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
    bool isMajorityElement(vector<int>& nums, int target) {
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        if (it1 == nums.end() || *it1 != target) {
            return false;
        }
        int index2 = it1 - nums.begin() + nums.size() / 2;
        return index2 < nums.size() && nums[index2] == target;
    }
};
