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

// math
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int curr = 0, cnt = 0;
        for (const auto& x : moves) {
            if (x == 'L') {
                --curr;
            } else if (x == 'R') {
                ++curr;
            } else {
                ++cnt;
            }
        }
        return abs(curr) + cnt;
    }
};
