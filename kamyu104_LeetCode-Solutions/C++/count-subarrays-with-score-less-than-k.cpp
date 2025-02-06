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

// sliding window, two pointers
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int64_t result = 0, total = 0;
        int left = 0;
        for (int right = 0; right < size(nums); ++right) {
            total += nums[right];
            while (total * (right - left + 1) >= k) {
                total -= nums[left++];
            }
            result += right - left + 1;
        }
        return result;
    }
};
