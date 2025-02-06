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

// counting, simulation
class Solution {
public:
    int countCollisions(string directions) {
        int result = 0, cnt = 0, smooth = 1;
        for (const auto& x : directions) {
            if (x == 'R') {
                ++cnt;
            } else if (x == 'S' || (cnt || !smooth)) {
                result += cnt + static_cast<int>(x == 'L');
                cnt = smooth = 0;
            }
        }
        return result;
    }
};
