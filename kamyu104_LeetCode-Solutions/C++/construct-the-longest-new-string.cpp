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

// constructive algorithms, math
class Solution {
public:
    int longestString(int x, int y, int z) {
        return ((min(x, y) * 2 + static_cast<int>(x != y)) + z) * 2;
    }
};
