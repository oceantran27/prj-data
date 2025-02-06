#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 1276 Number of Burgers with No Waste of Ingredients.cpp

class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if (tomatoSlices % 2) return {};
        int x = tomatoSlices / 2 - cheeseSlices;
        if (x < 0) {
            return {};
        }
        int y = cheeseSlices - x;
        if (y < 0) {
            return {};
        }
        return {x, y};
    }
};