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
    int stoneGameVIII(vector<int>& stones) {
        partial_sum(begin(stones), end(stones), begin(stones));
        return accumulate(next(rbegin(stones)), prev(rend(stones)), stones.back(),
                          [](int curr, int x) { return max(curr, x - curr); });
    }
};
