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
    int minOperations(vector<int>& nums, int k) {
        return count_if(cbegin(nums), cend(nums), [&](const auto& x) {
            return x < k;
        });
    }
};
