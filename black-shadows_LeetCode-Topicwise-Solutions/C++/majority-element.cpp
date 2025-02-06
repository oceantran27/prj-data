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
    int majorityElement(vector<int>& nums) {
        int ans = nums[0], cnt = 1;
        for (const auto& i : nums) {
            if (i == ans) {
                ++cnt;
            } else {
                --cnt;
                if (cnt == 0) {
                    ans = i;
                    cnt = 1;
                }
            }
        }
        return ans; 
    }
};
