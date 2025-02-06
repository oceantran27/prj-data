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
    int missingNumber(vector<int> &nums) {
        int n = nums.size();
        int res = n;
        for (int i = 0; i < n; ++i)
            res ^= nums[i] ^ i;
        return res;
    }
};