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

// string
class Solution {
public:
    int countAsterisks(string s) {
        int result = 0, cnt = 0;
        for (const auto& c : s) {
            if (c == '|') {
                cnt = (cnt + 1) % 2;
                continue;
            }
            if (c == '*' && cnt == 0) {
                ++result;
            }
        }
        return result;
    }
};
