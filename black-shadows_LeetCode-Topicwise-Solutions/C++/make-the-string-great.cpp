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
    string makeGood(string s) {
        string result;
        for (const auto& ch : s) {
            char counter_ch = islower(ch) ? toupper(ch) : tolower(ch);
            if (!result.empty() && result.back() == counter_ch) {
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }
        return result;
    }
};
