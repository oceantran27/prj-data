#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

// string, bitmasks
class Solution {
public:
    bool isFascinating(int n) {
        int lookup = 0;
        const auto& check = [&](int x) {
            for (; x ; x /= 10) {
                const int d = x % 10;
                if (d == 0 || lookup & (1 << d)) {
                    return false;
                }
                lookup |= 1 << d;
            }
            return true;
        };

        return check(n) && check(2 * n) && check(3 * n);
    }
};
