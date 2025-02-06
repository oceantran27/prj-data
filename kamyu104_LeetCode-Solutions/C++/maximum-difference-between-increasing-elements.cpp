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
    int maximumDifference(vector<int>& nums) {
        int result = 0, prefix = numeric_limits<int>::max();
        for (const auto& x : nums) {
            result = max(result, x - prefix);
            prefix = min(prefix, x);
        }
        return result ? result : -1;
    }
};
