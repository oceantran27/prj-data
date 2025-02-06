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

// dp
class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int result = 0, cnt = 0;
        for (const auto& c : s) {
            if (c == '0') {
                ++cnt;
                continue;
            }
            if (cnt) {
                result = max(result + 1, cnt);
            }
        }
        return result;
    }
};
