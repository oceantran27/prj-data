#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
#include <cstdint>

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int64_t sum = 0;
        int n = nums.size();
        int i;
        for (i = 0; i < n; ++i) {
            sum += nums[i];
        }
        int64_t s1 = 0, s2;
        for (i = 0; i < n; ++i) {
            s2 = sum - s1 - nums[i];
            if (s1 == s2) {
                return i;
            }
            s1 += nums[i];
        }
        return -1;
    }
};
