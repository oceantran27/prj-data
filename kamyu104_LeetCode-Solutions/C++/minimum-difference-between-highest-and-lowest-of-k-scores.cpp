#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(1)

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int result = numeric_limits<int>::max();
        for (int i = k - 1; i < size(nums); ++i) {
            result = min(result, nums[i] - nums[i - k + 1]);
        }
        return result;
    }
};
