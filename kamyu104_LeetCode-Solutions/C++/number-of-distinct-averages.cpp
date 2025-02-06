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

// sort, two pointers, hash table
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(begin(nums), end(nums));
        unordered_set<int> lookup;
        for (int left = 0, right = size(nums) - 1; left < right; ++left, --right) {
            lookup.emplace(nums[left] + nums[right]);
        }
        return size(lookup);
    }
};
