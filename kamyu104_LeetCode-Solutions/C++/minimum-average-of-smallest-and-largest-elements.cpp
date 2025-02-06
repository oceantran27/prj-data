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

// sort
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(begin(nums), end(nums));
        double result = numeric_limits<double>::max();
        for (int i = 0; i < size(nums) / 2; ++i) {
            result = min(result, (nums[i] + nums[(size(nums) - 1) - i]) / 2.0);
        }
        return result;
    }
};
