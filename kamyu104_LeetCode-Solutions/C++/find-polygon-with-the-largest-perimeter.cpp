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

// sort, prefix sum, greedy
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int64_t prefix = accumulate(cbegin(nums), cend(nums), 0ll);
        for (int i = size(nums) - 1; i >= 2; --i) {
            prefix -= nums[i];
            if (prefix > nums[i]) {
                return prefix + nums[i];
            }
        }
        return -1;
    }
};
