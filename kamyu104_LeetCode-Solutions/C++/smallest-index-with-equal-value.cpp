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
    int smallestEqual(vector<int>& nums) {
        for (int i = 0; i < size(nums); ++i) {
            if (i % 10 == nums[i]) {
                return i;
            }
        }
        return -1;
    }
};
