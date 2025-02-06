#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "NumberOfIslands.hpp"

#include <queue>

using namespace std;

int NumberOfIslands::numIslands(vector<vector<char>> &grid) {
    if (grid.empty())
        return 0;

    int m = grid.size();
    int n = grid[0].size();

    if (n == 0)
        return 0;

    int result = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                result++;
                bfs(grid, i, j, m, n);
            }
        }
    }

    return result;
}

void NumberOfIslands::bfs(vector<vector<char>> &grid, int i, int j, int m, int n) {
    typedef pair<int, int> state_t;
    auto isValid = [&](const state_t &s) {
        const int x = s.first;
        const int y = s.second;

        return !(x < 0 || x >= m || y < 0 || y >= n || grid[x][y] != '1');
    };
    auto findNeighbors = [&](const state_t &s) {
        vector<state_t> result;
        const int x = s.first;
        const int y = s.second;
        vector<state_t> candidates{{x - 1, y},
                                   {x + 1, y},
                                   {x,     y - 1},
                                   {x,     y + 1}};

        for (auto c : candidates) {
            if (isValid(c))
                result.push_back(c);
        }

        return result;
    };
    auto markState = [&](const state_t &s) {
        const int x = s.first;
        const int y = s.second;
        grid[x][y] = '2';
    };
    queue<state_t> q;
    state_t init{i, j};
    markState(init);
    q.push(init);

    while (!q.empty()) {
        state_t s = q.front();
        q.pop();
        auto neighbors = findNeighbors(s);

        for (auto nb : neighbors) {
            markState(nb);
            q.push(nb);
        }
    }
}
