#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(26^2)
// Space: O(1)

// enumeration
class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;
        for (char x = s[0]; x <= s[3]; ++x) {
            for (char y = s[1]; y <= s[4]; ++y) {
                result.push_back({x, y});
            }
        }
        return result;
    }
};
