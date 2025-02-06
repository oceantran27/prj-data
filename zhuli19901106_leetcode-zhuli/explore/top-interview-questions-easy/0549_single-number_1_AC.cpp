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
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int i;
        int res = 0;
        for (i = 0; i < n; ++i) {
            res ^= nums[i];
        }
        return res;
    }
};
