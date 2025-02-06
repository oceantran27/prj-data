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
// Space: O(n)

class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> stk = {{'^', 0}};
        for (const auto& c : s) {
            if (stk.back().first == c) {
                if (++stk.back().second == k) {
                    stk.pop_back();
                }
            } else {
                stk.emplace_back(c, 1);
            }
        }
        string result;
        for (const auto& [c, v] : stk) {
            result += string(v, c);
        }
        return result;
    }
};
