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
// Space: O(n)

// freq table
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int64_t result = size(nums) * (size(nums) - 1) / 2;
        unordered_map<int, int> cnt;
        for (int i = 0; i < size(nums); ++i) {
            result -= cnt[nums[i] - i]++;
        }
        return result;
    }
};
