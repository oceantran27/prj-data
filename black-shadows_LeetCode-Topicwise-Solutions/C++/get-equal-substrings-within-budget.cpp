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
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0, right = 0;
        for (; right < s.length(); ++right) {
            maxCost -= abs(s[right] - t[right]);
            if (maxCost < 0) {
                maxCost += abs(s[left] - t[left]);
                ++left;
            }
        }
        return right - left;
    }
};
