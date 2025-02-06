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

class Solution {
public:
    int bulbSwitch(int n) {
        // The number of full squares.
        return static_cast<int>(sqrt(n));
    }
};
