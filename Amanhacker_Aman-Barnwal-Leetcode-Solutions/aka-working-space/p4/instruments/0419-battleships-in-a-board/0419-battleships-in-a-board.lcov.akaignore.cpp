/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0419_BATTLESHIPS_IN_A_BOARD_0419_BATTLESHIPS_IN_A_BOARD_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0419_BATTLESHIPS_IN_A_BOARD_0419_BATTLESHIPS_IN_A_BOARD_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



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
public:

    // Top, right, down, left
    // (-1, 0), (0, 1), (1, 0), (0, -1)
    
    // Only right, and down direction will work
    int dx[4] = {0, 1};
    int dy[4] = {1, 0};
    
    void dfs(int x, int y, int n, int m, vector<vector<char>> &board) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(x < 0 || x >= n || y < 0 || y >= m || board[x][y] != 'X')            return;    
        
        board[x][y] = '.';
        
        for(int i=0; i<4; i++) {
            
            int x1 = x + dx[i];
            int y1 = y + dy[i];
            
            dfs(x1, y1, n, m, board);
        }
        
        return;
    }
    
    int countBattleships(vector<vector<char>>& board) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int count = 0;
        
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
            
                if(board[i][j] == 'X') {
                   dfs(i, j, n, m, board);
                   count++;
                }
            }
        }
        
        return count;
    }
    
};
#endif
