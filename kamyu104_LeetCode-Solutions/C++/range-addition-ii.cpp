#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(p), p is the number of ops
// Space: O(1)

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        for (const auto& op : ops) {
            m = min(m, op[0]);
            n = min(n, op[1]);
        }
        return m * n;
    }
};
