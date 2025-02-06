#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(1)

// sort, greedy
class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(begin(maximumHeight), end(maximumHeight), greater<int>());
        int64_t result = 0;
        int prev = maximumHeight.front() + 1;
        for (const auto& x : maximumHeight) {
            prev = min(x, prev - 1);
            if (prev == 0) {
                return -1;
            }
            result += prev;
        }
        return result;
    }
};
