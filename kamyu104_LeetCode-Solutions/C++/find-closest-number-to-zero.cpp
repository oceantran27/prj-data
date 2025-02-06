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

// array
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        return *max_element(cbegin(nums), cend(nums),
                            [](const auto& x, const auto& y) {
                                return make_pair(-abs(x), x) < make_pair(-abs(y), y);
                            });
    }
};
