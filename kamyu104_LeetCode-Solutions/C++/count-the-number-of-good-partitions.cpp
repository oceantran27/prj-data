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

// hash table, combinatorics
class Solution {
public:
    int numberOfGoodPartitions(vector<int>& nums) {
        static const int MOD = 1e9 + 7;

        unordered_map<int, int> lookup;
        for (int i = 0; i < size(nums); ++i) {
            lookup[nums[i]] = i;
        }
        int result = 1;
        for (int left = 0, right = 0; left < size(nums); ++left) {
            if (left == right + 1) {
                result = (result << 1) % MOD;
            }
            right = max(right, lookup[nums[left]]);
        }
        return result;
    }
};
