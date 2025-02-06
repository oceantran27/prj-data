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
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        string temp = "";
        for (int i = 0; i < n; ++i)
            temp += ".";
        vector<string> board(n, temp);
        unordered_map<int, bool> left_diagonal, right_diagonal;
        vector<bool> row(n, false), col(n, false);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                left_diagonal[i + j] = false;
                right_diagonal[i - j] = false;
            }
        }
        Backtrack(0, n, board, res, col, left_diagonal, right_diagonal);
        return res;

    }

    void Backtrack(int i, int &n, vector<string> &board, vector<vector<string>> &res,
                   vector<bool> &col, unordered_map<int, bool> &left_diagonal,
                   unordered_map<int, bool> &right_diagonal) {
        if (i == n) {
            res.push_back(board);
            return;
        }
        for (int j = 0; j < n; ++j) {
            if (!col[j] && !left_diagonal[i + j] && !right_diagonal[i - j]) {
                col[j] = true;
                left_diagonal[i + j] = true;
                right_diagonal[i - j] = true;
                board[i][j] = 'Q';
                Backtrack(i + 1, n, board, res, col, left_diagonal, right_diagonal);
                board[i][j] = '.';
                col[j] = false;
                left_diagonal[i + j] = false;
                right_diagonal[i - j] = false;
            }
        }
    }
};
