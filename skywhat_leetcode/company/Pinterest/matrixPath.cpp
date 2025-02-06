#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// We are designing a 2D game and we have a game map that we represent by an
// integer matrix. For now, each cell can be a wall (denoted by -1) or a blank
// space (0).

// board = [
//     [ 0,  0,  0, 0, -1 ],
//     [ 0, -1, -1, 0,  0 ],
//     [ 0,  0,  0, 0,  0 ],
//     [ 0, -1,  0, 0,  0 ],
//     [ 0,  0,  0, 0,  0 ],
//     [ 0,  0,  0, 0,  0 ],
// ]

// start = (3,2)

// The player can move 1 space at a time up, down, left, or right. The player
// can't go through walls or land on a wall, or go through the edges of the
// board.

// Write a function that, given a board and a player starting position
// (represented as a row-column pair), returns all of the possible next
// positions for the player.

// Expected output (in any order):
// board, (3, 2):
//   (2, 2), (3, 3), (4, 2)

// board, (5, 0):
// (4, 0), (5, 1)

// Given a board and an end position for the player, write a function to
// determine if it is possible to travel from every open cell on the board to
// the given end position.

// board = [
//     [ 0,  0,  0, 0, -1 ],
//     [ 0, -1, -1, 0,  0 ],
//     [ 0,  0,  0, 0,  0 ],
//     [ 0, -1,  0, 0,  0 ],
//     [ 0,  0,  0, 0,  0 ],
//     [ 0,  0,  0, 0,  0 ],
// ]

// board2 = [
//     [  0,  0,  0, 0, -1 ],
//     [  0, -1, -1, 0,  0 ],
//     [  0,  0,  0, 0,  0 ],
//     [  0, -1,  0, 0,  0 ],
//     [ -1,  0,  0, 0,  0 ],
//     [  0, -1,  0, 0,  0 ],
// ]

// end = (0, 0)

// Expected output:
// board, end -> True
// board2, end -> False

// Now we also have treasures, denoted by 1. Given a board and start and end
// positions for the player, write a function to return the shortest simple path
// from start to end that includes all the treasures, if one exists. A simple
// path is one that does not revisit any location.

// board3 = [
//     [  1,  0,  0, 0, 0 ],
//     [  0, -1, -1, 0, 0 ],
//     [  0, -1,  0, 1, 0 ],
//     [ -1,  0,  0, 0, 0 ],
//     [  0,  1, -1, 0, 0 ],
//     [  0,  0,  0, 0, 0 ],
// ]

// treasure(board3, (5, 0), (0, 4)) -> None

// treasure(board3, (5, 1), (2, 0)) ->
// [(5, 1), (4, 1), (3, 1), (3, 2), (2, 2), (2, 3), (1, 3), (0, 3), (0, 2),
// (0, 1), (0, 0), (1, 0), (2, 0)]

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    vector<vector<int>> getNextPosition(vector<vector<int>>& board,
                                        vector<int> start) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> res;
        for (auto d : dir) {
            int x = d[0] + start[0];
            int y = d[1] + start[1];
            if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] == -1) {
                continue;
            }
            res.push_back({x, y});
        }

        return res;
    }

    bool travelAllCell(vector<vector<int>>& board, vector<int> start) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visit(m, vector<bool>(n, false));
        dfs(board, visit, start[0], start[1], m, n);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 0 && visit[i][j] == false) {
                    return false;
                }
            }
        }

        return true;
    }
    // time O(m*n)
    // space O(m*n*sizeof(bool))
    void dfs(const vector<vector<int>>& board,
             vector<vector<bool>>& visit,
             int i,
             int j,
             const int& m,
             const int& n) {
        for (auto d : dir) {
            int x = d[0] + i;
            int y = d[1] + j;
            if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] == -1
                || visit[x][y]) {
                continue;
            }
            visit[x][y] = true;
            dfs(board, visit, x, y, m, n);
        }
    }
    // start[0,0] end[0,1]
    vector<vector<int>> getShortestPathIncludeTreasure(
        vector<vector<int>>& board,
        vector<int> start,
        vector<int> end) {
        set<vector<int>> treasures;
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visit(m, vector<int>(n, false));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == 1) {
                    treasures.insert({i, j});
                }
            }
        }

        queue<vector<vector<int>>> q;
        q.push({start});
        visit[start[0]][start[1]] = true;
        int step = 0;
        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                vector<vector<int>> cur_path = q.front();
                q.pop();
                vector<int> pos = cur_path.back();

                if (pos == end) {
                    if (includeAllTreasure(cur_path)) {
                        return cur_path;
                    }
                }

                for (auto d : dir) {
                    int x = d[0] + pos[0];
                    int y = d[1] + pos[1];
                    if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] == -1
                        || visit[x][y]) {
                        continue;
                    }
                    vector<vector<int>> next_path = cur_path;
                    next_path.push_back({x, y});
                    q.push(next_path);
                }
            }
        }
    }

    bool includeAllTreasure() {}
};

int main() {
    //     vector<vector<int>> board = {
    //       { 0,  0,  0, 0, -1 },
    //       { 0, -1, -1, 0,  0 },
    //       { 0,  0,  0, 0,  0 },
    //       { 0, -1,  0, 0,  0 },
    //       { 0,  0,  0, 0,  0 },
    //       { 0,  0,  0, 0,  0 },
    //     };

    //     vector<int> start = { 5, 4 };

    //     Solution s;
    //     vector<vector<int>> nexts = s.getNextPosition(board, start);
    //     for(auto next: nexts){
    //         cout<<next[0]<<" "<<next[1]<<endl;
    //     }

    //     return 0;

    //   vector<vector<int>> board2 = {
    //     { 0,  0,  -1, 0, -1 },
    //     { 0, -1, 0, -1,  0 },
    //     { -1,  0,  0, 0,  0 },
    //     { 0, -1,  0, 0,  0 },
    //     { 0,  0,  0, 0,  0 },
    //     { 0,  -1,  0, 0,  0 },
    //   };

    //     vector<int> start = {5,4};
    //     Solution s;
    //     cout<<s.travelAllCell(board2, start)<<endl;

    //     return 0;

    vector<vector<int>> board3 = {
        {1, 0, 0, 0, 0},  {0, -1, -1, 0, 0}, {0, -1, 0, 1, 0},
        {-1, 0, 0, 0, 0}, {0, 1, -1, 0, 0},  {0, 0, 0, 0, 0},
    };
}
