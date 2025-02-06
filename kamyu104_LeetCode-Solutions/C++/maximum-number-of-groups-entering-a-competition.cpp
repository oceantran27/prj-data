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
    int maximumGroups(vector<int>& grades) {
        // (1+x)*x/2 <= len(grades)
        // => x <= ((1+8*len(grades))**0.5-1)/2.0
        return static_cast<int>((sqrt(1 + 8 * size(grades)) - 1) / 2.0);
    }
};
