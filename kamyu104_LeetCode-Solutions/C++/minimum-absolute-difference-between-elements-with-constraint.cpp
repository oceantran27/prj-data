#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(n)

// bst, binary search
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int result = numeric_limits<int>::max();
        set<int> bst;
        for (int i = x; i < size(nums); ++i) {
            bst.emplace(nums[i - x]);
            const auto it = bst.lower_bound(nums[i]);
            if (it != begin(bst)) {
                result = min(result, nums[i] - *prev(it));
            } 
            if (it != end(bst)) {
                result = min(result, *it - nums[i]);
            }
        }
        return result;
    }
};
