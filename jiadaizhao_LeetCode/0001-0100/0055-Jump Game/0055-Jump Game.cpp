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
    bool canJump(vector<int>& nums) {
        int maxIndex = 0;
        int n = nums.size();
        for (int i = 0; i < n && i <= maxIndex; ++i) {
            maxIndex = max(maxIndex, i + nums[i]);
        }
        
        return maxIndex >= n - 1;
    }
};
