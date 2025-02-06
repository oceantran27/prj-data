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
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int dist = abs(target[0]) + abs(target[1]);
        for (auto ghost : ghosts) {
            if (abs(target[0] - ghost[0]) + abs(target[1] - ghost[1]) <= dist) {
                return false;
            }
        }
        return true;
    }
};
