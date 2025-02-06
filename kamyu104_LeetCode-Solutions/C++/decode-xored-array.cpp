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
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result = {first};
        for (const auto& x: encoded) {
            result.emplace_back(result.back() ^ x);
        }
        return result;
    }
};
