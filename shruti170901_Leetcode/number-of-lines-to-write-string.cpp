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
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> result(2);
        result.front() = 1;
        for (const auto& c : S) {
            const auto& w = widths[c - 'a'];
            result.back() += w;
            if (result.back() > 100) {
                ++result.front();
                result.back() = w;
            }
        }
        return result;
    }
};
