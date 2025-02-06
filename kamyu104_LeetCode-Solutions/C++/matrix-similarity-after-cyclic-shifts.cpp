#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(m * n)
// Space: O(1)

// array
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        for (const auto& row: mat) {
            for (int j = 0; j < size(row); ++j) {
                if (row[j] != row[(j + k) % size(row)]) {
                    return false;
                }
            }
        }
        return true;
    }
};
