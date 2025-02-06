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
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double result = 0;
        int prev = 0;
        for (const auto& b : brackets) {
            result += max((min(b[0], income) - prev) * b[1] / 100.0, 0.0);
            prev = b[0];
        }
        return result;
    }
};
