#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(sqrt(c) * logc)
// Space: O(1)

class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long a = 0; a * a <= c; ++a) {
            auto b = static_cast<int>(sqrt(c - a * a));
            if (a * a + b * b == c) {
                return true;
            }
        }
        return false;
    }
};

