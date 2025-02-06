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

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int result = 0, curr = 0;
        for (int i = 0; i < size(nums); ++i) {
            if (!(i && nums[i - 1] < nums[i])) {
                curr = 0;
            }
            curr += nums[i];
            result = max(result, curr);
        }
        return result;
    }
};
