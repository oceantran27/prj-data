#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(s + logn), s is the number of elements in the array
// Space: O(1)

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patch = 0;
        for (uint64_t miss = 1, i = 0; miss <= n;) {
            if (i < nums.size() && nums[i] <= miss) {
                miss += nums[i++];
            } else {
                miss += miss;  // miss may overflow, thus prefer to use uint64_t.
                ++patch;
            }
        }
        return patch;
    }
};
