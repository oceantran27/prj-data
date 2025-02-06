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
    int maxSubArray(vector<int>& nums) {
        int maxPrev = nums[0];
        int result = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int curr = max(nums[i], nums[i] + maxPrev);
            result = max(result, curr);
            maxPrev = curr;
        }
        return result;
    }
};
