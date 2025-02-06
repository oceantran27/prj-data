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
    int minPairSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int result = 0;
        for (int i = 0; i < size(nums) / 2; ++i) {
            result = max(result, nums[i] + nums[size(nums) - 1 - i]);
        }
        return result;
    }
};
