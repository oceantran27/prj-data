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
    int maxCount(int m, int n, vector<vector<int>> &ops) {
        for (auto &o:ops)
            m = min(m, o[0]), n = min(n, o[1]);
        return m * n;
    }
};
