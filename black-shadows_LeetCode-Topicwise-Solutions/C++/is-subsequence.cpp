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

// Greedy solution.
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) {
            return true;
        }

        int i = 0;
        for (const auto& c : t) {
            if (c == s[i]) { 
                ++i;
            }
            if (i == s.length()) {
                break;
            }
        }
        return i == s.length();
    }
};
