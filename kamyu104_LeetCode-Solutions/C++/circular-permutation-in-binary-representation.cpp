#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(2^n)
// Space: O(1)

class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> result;
        for (int i = 0; i < 1 << n; ++i) {
            result.emplace_back(start ^ (i >> 1) ^ i);
        }
        return result;
    }
};
