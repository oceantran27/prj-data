#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// array
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < size(nums); ++i) {
            result = max(result, abs(nums[i] - (i - 1 >= 0 ? nums[i - 1] : nums.back())));
        }
        return result;
    }
};
