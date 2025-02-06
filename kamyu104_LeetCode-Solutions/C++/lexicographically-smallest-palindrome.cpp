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

// greedy
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for (int i = 0; i < size(s) / 2; ++i) {
            s[i] = s[(size(s) - 1) - i] = min(s[i], s[(size(s) - 1) - i]);
        }
        return s;
    }
};
