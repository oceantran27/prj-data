#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n^2)
// Space: O(1)

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto& row : A) {
            for (int i = 0; i < (row.size() + 1) / 2; ++i) {
                row[i] ^= 1;
                if (i != row.size() + ~i) {
                    row[row.size() + ~i] ^= 1;
                    swap(row[i], row[row.size() + ~i]);
                }
            }
        }
        return A;
    }
};
