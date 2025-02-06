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

// simulation
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int result = 0;
        for (const auto& x : batteryPercentages) {
            if (x > result) {
                ++result;
            }
        }
        return result;
    }
};
