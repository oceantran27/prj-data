#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "PaintHouse.hpp"

int PaintHouse::minCost(vector<vector<int>> &costs) {
    if (costs.empty()) return 0;

    for (int i = 1; i < costs.size(); i++) {
        costs[i][0] += min(costs[i - 1][1], costs[i - 1][2]);
        costs[i][1] += min(costs[i - 1][0], costs[i - 1][2]);
        costs[i][2] += min(costs[i - 1][0], costs[i - 1][1]);
    }

    return min(costs[costs.size() - 1][0], min(costs[costs.size() - 1][1], costs[costs.size() - 1][2]));
}
