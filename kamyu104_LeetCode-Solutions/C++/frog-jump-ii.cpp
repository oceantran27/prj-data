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

// greedy
class Solution {
public:
    int maxJump(vector<int>& stones) {
        if (size(stones) == 2) {
            return stones[1] - stones[0];
        }
        int result = 0;
        for (int i = 0; i + 2 < size(stones); ++i) {
            result = max(result, stones[i + 2] - stones[i]);
        }
        return result;
    }
};
