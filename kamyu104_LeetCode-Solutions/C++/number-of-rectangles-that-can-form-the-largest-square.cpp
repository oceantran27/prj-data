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
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int result = 0, mx = 0;
        for (const auto& rec : rectangles) {
            int side = min(rec[0], rec[1]);
            if (side > mx) {
                mx = side;
                result = 1;
            } else if (side == mx) {
                ++result;
            }
        }
        return result;
    }
};
