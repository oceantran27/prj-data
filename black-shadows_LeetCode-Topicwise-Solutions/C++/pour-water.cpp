#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(v * n)
// Space: O(1)

class Solution {
public:
    vector<int> pourWater(vector<int>& heights, int V, int K) {
        for (; V > 0; --V) {
            int best = K;
            for (const auto& d : {-1, 1}) {
                int i = K;
                while (0 <= i + d && i + d < heights.size() &&
                       heights[i + d] <= heights[i]) {
                    if (heights[i + d] < heights[i]) {
                        best = i + d;
                    }
                    i += d;
                }
                if (best != K) {
                    break;
                }
            }
            ++heights[best];
        }
        return heights;
    }
};
