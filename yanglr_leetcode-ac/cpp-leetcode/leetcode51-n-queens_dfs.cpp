#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
    vector<vector<string>> res;
    vector<string> board;
    int N;
public:
    vector<vector<string>> solveNQueens(int n) {
        N = n;
        string curRow;
        // 将棋盘 board 的格子全初始化为空白格(题中要求用.表示)
        for (int i = 0; i < n; i++)
            curRow += ".";
        for (int i = 0; i < n; i++)
            board.push_back(curRow);

        dfs(0); // 从第1行(行索引为0)开始放置
        return res;
    }
    /* dfs的作用: 外部接口是放置第i行, 内部操作是: 遍历当前行的每一列 */
    void dfs(int i)
    {
        if (i == N)
        {
            res.push_back(board);
            return;
        }
        for (int j = 0; j < N; j++)
        {
            if (isValid(i, j))
            {
                board[i][j] = 'Q';
                dfs(i + 1);
                board[i][j] = '.';
            }
        }
    }

    bool isValid(int row, int col)
    {
        for (int i = 0; i < row; i++)
        {
            if (board[i][col] == 'Q') return false;
        }
        for (int j = 0; j < col; j++)
        {
            if (board[row][j] == 'Q') return false;            
        }
        int k = 1;
        while (row - k >= 0 && col - k >= 0) /* 确保 index 没越界 */
        { /* \ 斜线 (捺) 上出现了皇后, 返回false */
            if (board[row - k][col - k] == 'Q') return false;
            k++;
        }
        k = 1; // 复位
        while (row - k >= 0 && col + k < N)
        {
            /* / 斜线 (撇) 上出现了皇后, 返回false */
            if (board[row - k][col + k] == 'Q') return false;
            k++;
        }
        return true;
    }
};

// Test
int main()
{
    Solution sol;
    int n = 8;
    auto res = sol.solveNQueens(n);  // n = 8 时有92组解
    for (auto& row : res) // 遍历每一行
    {
        for (auto& elem : row) // 输出每一个元素
            cout << elem << "\n";  
        cout << "\n";
    }    

    return 0;
}