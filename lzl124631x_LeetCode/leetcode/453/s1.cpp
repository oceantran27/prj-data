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
    int minMoves(vector<int>& nums) {
        int ret = 0, n = nums.size();
        int min = nums[0];
        for (int i = 1; i < n; ++i) {
            if (nums[i] < min) min = nums[i];
        }
        for (int i = 0; i < n; ++i) {
            ret += nums[i] - min;
        }
        return ret;
    }
};