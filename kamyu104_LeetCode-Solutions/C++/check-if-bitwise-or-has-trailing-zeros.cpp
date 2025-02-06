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

// bit manipulation
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int cnt = 0;
        for (const auto& x : nums) {
            if (x % 2) {
                continue;
            }
            if (++cnt == 2) {
                return true;
            }
        }
        return false;
    }
};
