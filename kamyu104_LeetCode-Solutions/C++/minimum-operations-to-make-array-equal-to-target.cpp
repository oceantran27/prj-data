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

// greedy, lc1526
class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        for (int i = 0; i < size(target); ++i) {
            target[i] -= nums[i];
        }
        int64_t result = 0;
        for (int i = 0; i <= size(target); ++i) {
            result += max((i < size(target) ? target[i] : 0) - (i - 1 >= 0 ? target[i - 1] : 0), 0);
        }
        return result;
    }
};
