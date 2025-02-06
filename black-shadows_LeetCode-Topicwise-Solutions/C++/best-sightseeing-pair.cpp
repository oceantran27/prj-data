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
    int maxScoreSightseeingPair(vector<int>& A) {
        int result = 0, curr = 0;
        for (const auto& x : A) {
            result = max(result, curr + x);
            curr = max(curr, x) - 1;
        }
        return result;
    }
};
