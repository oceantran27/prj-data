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
    bool containsDuplicate(vector<int>& nums) {
        set<int> nums2(nums.begin(), nums.end()); // set去重
        if (nums2.size() != nums.size()) return true;
        return false;
    }
};
