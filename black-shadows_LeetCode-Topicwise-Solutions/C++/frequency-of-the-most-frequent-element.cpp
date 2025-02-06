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
// Space: O(n)

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int left = 0, right = 0;
        for (int64_t total = k ; right < size(nums); ++right) {
            total += nums[right];
            if (total < int64_t(nums[right]) * (right - left + 1)) {
                total -= nums[left++];
            }
        }
        return (right - 1) - left + 1;
    }
};
