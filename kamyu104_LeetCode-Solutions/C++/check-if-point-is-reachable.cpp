#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(log(min(a, b)))
// Space: O(1)

// number theory
class Solution {
public:
    bool isReachable(int targetX, int targetY) {
        const int g = gcd(targetX, targetY);
        return g == (g & ~(g - 1));  // co-prime other than factor 2
    }
};
