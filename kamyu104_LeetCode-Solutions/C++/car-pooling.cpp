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
// Space: O(n)

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> lookup;
        for (const auto& trip : trips) {
            lookup[trip[1]] += trip[0];
            lookup[trip[2]] -= trip[0];
        }
        for (const auto& [location, num] : lookup) {
            if ((capacity -= num) < 0) {
                return false;
            }
        }
        return true;
    }
};
