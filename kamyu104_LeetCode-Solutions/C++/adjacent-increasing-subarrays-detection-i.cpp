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
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int result = 0;
        int curr = 1, prev = 0;
        for (int i = 0; i + 1 < size(nums); ++i) {
            if (nums[i] < nums[i + 1]) {
                ++curr;
            } else {
                prev = curr;
                curr = 1;
            }
            result = max({result, curr / 2, min(prev, curr)});
        }
        return result >= k;
    }
};
