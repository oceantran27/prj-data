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

// prefix sum
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int64_t total = accumulate(cbegin(nums), cend(nums), 0ll), curr = 0;
        int result = 0;
        for (int i = 0; i + 1 < size(nums); ++i) {
            curr += nums[i];
            result += static_cast<int>(curr >= (total - curr));
        }
        return result;
    }
};
