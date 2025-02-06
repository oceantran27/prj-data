#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "SurroundedRegions.hpp"

#include <queue>

using namespace std;

void SurroundedRegions::solve(vector<vector<char>> &board) {
    if (board.empty())
        return;

    int m = board.size();
    int n = board[0].size();

    for (int j = 0; j < n; j++) {
        bfs(board, 0, j, m, n);
        bfs(board, m - 1, j, m, n);
    }

    for (int i = 0; i < m; i++) {
        bfs(board, i, 0, m, n);
        bfs(board, i, n - 1, m, n);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'O')
                board[i][j] = 'X';
            else if (board[i][j] == '+')
                board[i][j] = 'O';
        }
    }
}

void SurroundedRegions::bfs(vector<vector<char>> &board, int i, int j, int m, int n) {
    typedef pair<int, int> state_t;
    auto isValid = [&](const state_t &s) {
        const int x = s.first;
        const int y = s.second;

        return !(x < 0 || x >= m || y < 0 || y >= n || board[x][y] != 'O');
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
        board[x][y] = '+';
    };
    queue<state_t> q;
    state_t init{i, j};

    if (isValid(init)) {
        markState(init);
        q.push(init);
    }

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
