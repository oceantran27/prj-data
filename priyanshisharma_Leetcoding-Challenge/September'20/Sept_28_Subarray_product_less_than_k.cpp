#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        const int n = nums.size();
        long long p = 1;
        int res = 0;
        for (int start = 0, end = 0; end < n; end++) {
            p *= nums[end];
            while (start < end && p >= k)
                p /= nums[start++];
 
            if (p < k) {
                int len = end - start + 1;
                res += len;
            }
        }
    return res;
    }
};