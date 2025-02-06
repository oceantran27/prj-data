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
    bool canJump(vector<int> &nums) {
        int step = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            int curr = i + nums[i];
            step = max(step, curr);
            if (step <= i)
                return false;
        }
        return true;
    }
};
