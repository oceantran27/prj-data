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
    int minElements(vector<int>& nums, int limit, int goal) {
        int64_t total = accumulate(cbegin(nums), cend(nums), 0LL);
        return (abs(total - goal) + (limit - 1)) / limit;
    }
};
