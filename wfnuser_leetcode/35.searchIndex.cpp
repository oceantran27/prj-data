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
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        for (i = 0; i < nums.size(); i++) {
            if (target>nums[i]) continue;
            if (target == nums[i]) return i;
            if (target < nums[i]) {
                nums.insert(nums.begin()+i, target);
                return i;
            }
        }
        nums.push_back(target);
        return i;
    }
};