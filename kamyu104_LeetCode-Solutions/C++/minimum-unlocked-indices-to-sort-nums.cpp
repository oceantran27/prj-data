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

// sort
class Solution {
public:
    int minUnlockedIndices(vector<int>& nums, vector<int>& locked) {
        int result = 0;
        for (int i = 0, mx = 0, cnt = 0; i < size(nums); ++i) {
            if (mx < nums[i]) {
                mx = nums[i];
                cnt = 0;
            } else if (mx > nums[i]) {
                if (mx != nums[i] + 1) {
                    return -1;
                }
                result += cnt;
                cnt = 0;
            }
            cnt += locked[i];
        }
        return result;
    }
};
