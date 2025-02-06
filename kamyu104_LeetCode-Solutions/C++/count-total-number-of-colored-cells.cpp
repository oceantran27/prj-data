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
    long long coloredCells(int n) {
        return 1LL * n * n + 1LL * (n - 1) * (n - 1);
    }
};

// Time:  O(1)
// Space: O(1)
// math
class Solution2 {
public:
    long long coloredCells(int n) {
        return (1 + (1 + 2LL * (n - 1))) * n / 2 * 2 - (2LL * n - 1);
    }
};
