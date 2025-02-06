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
    int wiggleMaxLength(vector<int> &nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int i = 1, max = 1;
        int pre;
        while (nums[i] - nums[i - 1] == 0 && i < n)
            ++i;
        if (i == n)
            return max;
        pre = (nums[i] - nums[i - 1] > 0 ? 1 : -1);
        ++max;
        for (i = i + 1; i < n; ++i) {
            if (nums[i] == nums[i - 1])
                continue;
            int cur = (nums[i] - nums[i - 1] > 0 ? 1 : -1);
            if (pre != cur) {
                ++max;
                pre = cur;
            }
        }
        return max;
    }
};
