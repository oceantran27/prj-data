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
    bool canDivideIntoSubsequences(vector<int>& nums, int K) {
        int count = 1, maxCount = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                maxCount = max(maxCount, ++count);
            }
            else {
                count = 1;
            }
        }
        
        return nums.size() >= K * maxCount;
    }
};
