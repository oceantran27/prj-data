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
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.size() == 0) return m*n;

        int x = m;
        int y = n;

        for (auto op: ops) {
            x = min(op[0], x);
            y = min(op[1], y);
        }

        return x*y;
    }
};