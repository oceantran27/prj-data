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

// brute force, game theory
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total1 = 0, total2 = 0;
        for (const auto& x : nums) {
            if (x < 10) {
                total1 += x;
            } else {
                total2 += x;
            }
        }
        return total1 != total2;
    }
};
