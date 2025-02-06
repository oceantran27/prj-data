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
    int longestPalindrome(string s) {
        int odds = 0;
        for (auto c = 'A'; c <= 'z'; ++c) {
            odds += count(s.cbegin(), s.cend(), c) & 1;
        }
        return s.length() - odds + (odds > 0);
    }
};
