#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

// math
class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(begin(nums), end(nums));
        const auto a = nums[0], b = nums[1], c = nums[2];
        if (a + b <= c) {
            return "none";
        }
        if (a == b && b == c) {
            return "equilateral";
        }
        if (a == b || b == c) {
            return "isosceles";
        }
        return "scalene";
    }
};
