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
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int curr = 1;
        for (const auto& t : target) {
            for (int i = curr; i < t; ++i) {
                result.emplace_back("Push");
                result.emplace_back("Pop");
            }
            result.emplace_back("Push");
            curr = t + 1;
        }
        return result;
    }
};
