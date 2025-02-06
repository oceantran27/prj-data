#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

// math
class Solution {
public:
    bool canAliceWin(int n) {
        const int c = 10;
        // (c+(c-l+1))*l/2 <= n
        // l^2-(2*c+1)*l-2*n >= 0
        // l <= ((2*c+1)-((2*c+1)**2-8*n)**0.5)/2
        const int l = ((2 * c + 1) - sqrt((2 * c + 1) * (2 * c + 1) - 8 * n)) / 2;
        return l % 2 == 1;
    }
};
