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

// array
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i + 1 < size(nums); ++i) {
            if (nums[i] != nums[i + 1]) {
                ++result;
            }
        }
        return result;
    }
};
