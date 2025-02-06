#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "DesignTicTacToe.hpp"

TicTacToe::TicTacToe(int n) : n(n), rows(n, 0), cols(n, 0), diagonal(0), anti_diagonal(0) {}

int TicTacToe::move(int row, int col, int player) {
    int weight = (player == 1 ? 1 : -1);

    rows[row] += weight;
    cols[col] += weight;

    if (row == col) diagonal += weight;
    if (row + col == n - 1) anti_diagonal += weight;

    if (rows[row] == n || rows[row] == -n ||
        cols[col] == n || cols[col] == -n ||
        diagonal == n || diagonal == -n ||
        anti_diagonal == n || anti_diagonal == -n)
        return player;

    return 0;
}