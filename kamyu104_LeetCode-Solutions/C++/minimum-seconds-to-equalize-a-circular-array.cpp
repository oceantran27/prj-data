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
// Space: O(n)

// hash table
class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        unordered_map<int, int> lookup, dist;
        for (int i = 0; i < 2 * size(nums); ++i) {
            const auto& x = nums[i % size(nums)];
            dist[x] = max(dist[x], i - lookup[x]);
            lookup[x] = i;
        }
        return min_element(cbegin(dist), cend(dist), [](const auto& a, const auto& b) {
            return a.second < b.second;
        })->second / 2;
    }
};
