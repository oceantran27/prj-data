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

// stack
class Solution {
public:
    string removeStars(string s) {
        string result;
        for (const auto& c : s) {
            if (c == '*') {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }
        return result;
    }
};
