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
    int minTimeToVisitAllPoints(vector<vector<int>> &points) {
        int cst = 0;
        for (int i = 0; i < points.size() - 1; i++) {
            int x1 = points[i][0], y1 = points[i][1];
            int x2 = points[i + 1][0], y2 = points[i + 1][1];
            int dif_x = abs(x1 - x2), dif_y = abs(y1 - y2);
            cst += max(dif_x, dif_y);
        }
        return cst;
    }
};