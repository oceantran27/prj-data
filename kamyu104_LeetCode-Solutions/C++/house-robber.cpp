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
    int rob(vector<int>& nums) {
        int last = 0, result = 0;
        for (const auto& i : nums) {
            auto tmp = result;
            result = max(last + i, result);
            last = tmp;
        }
        return result;
    }
};
