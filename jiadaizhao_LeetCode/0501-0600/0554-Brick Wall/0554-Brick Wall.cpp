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
    int leastBricks(vector<vector<int>>& wall) {
        int m = wall.size();
        unordered_map<int, int> table;
        int maxCount = 0;
        for (int i = 0; i < m; ++i) {
            int n = wall[i].size();
            int sum = 0;
            for (int j = 0; j < n - 1; ++j) {
                sum += wall[i][j];
                maxCount = max(maxCount, ++table[sum]);
            }
        }
        
        return m - maxCount;
    }
};
