#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int> &A, int K) {
        int max_val = INT_MIN, min_val = INT_MAX;
        for (auto &a : A) {
            max_val = max(max_val, a);
            min_val = min(min_val, a);
        }
        return max(0, max_val - min_val - 2 * K);
    }
};
