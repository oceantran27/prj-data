#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/maximum-average-subarray-i/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(1)
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, maxSum = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            if (i < k) {
                sum += nums[i];
                if (i == k - 1) maxSum = sum;
            } else {
                sum += nums[i] - nums[i - k];
                maxSum = max(maxSum, sum);
            }
        }
        return (double)maxSum / k;
    }
};