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

// greedy
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int result = 0;
        for (const auto& x : nums) {
            if (x ^ (result & 1)) {
                continue;
            }
            ++result;
        }
        return result;
    }
};
