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
    vector<int> diStringMatch(string S) {
        vector<int> result;
        int left = 0, right = S.length();
        for (const auto& c : S) {
            if (c == 'I') {
                result.emplace_back(left);
                ++left;
            } else {
                result.emplace_back(right);
                --right;
            }
        }
        result.emplace_back(left);
        return result;
    }
};
