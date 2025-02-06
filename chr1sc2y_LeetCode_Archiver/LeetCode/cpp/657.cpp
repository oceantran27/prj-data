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
    bool judgeCircle(string moves) {
        int n = moves.size();
        vector<int> hori, vert;
        for (int i = 0; i < n; ++i) {
            if (moves[i] == 'L' || moves[i] == 'R') {
                hori.push_back(moves[i]);
                if (hori.size() > 1 && hori[hori.size() - 1] != hori[hori.size() - 2])
                    hori.erase(hori.end() - 2, hori.end());
            } else {
                vert.push_back(moves[i]);
                if (vert.size() > 1 && vert[vert.size() - 1] != vert[vert.size() - 2])
                    vert.erase(vert.end() - 2, vert.end());
            }
        }
        if (!vert.size() && !hori.size())
            return true;
        return false;
    }
};