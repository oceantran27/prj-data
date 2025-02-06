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
// Space: O(n)

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for (const auto& asteroid : asteroids) {
            bool is_exploded = false;
            while (!result.empty() && asteroid < 0 && 0 < result.back()) {
                if (result.back() < -asteroid) {
                    result.pop_back();
                    continue;
                } else if (result.back() == -asteroid) {
                    result.pop_back();
                }
                is_exploded = true;
                break;
            }
            if (!is_exploded) {
                result.emplace_back(asteroid);
            }
        }
        return result;
    }
};
