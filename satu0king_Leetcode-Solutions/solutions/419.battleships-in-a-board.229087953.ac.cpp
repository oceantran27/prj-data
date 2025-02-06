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
  int countBattleships(vector<vector<char>> &board) {
    int n = board.size();
    int m = board[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) {
        if (board[i][j] == 'X' && (i == 0 or board[i - 1][j] == '.') &&
            (j == 0 or board[i][j - 1] == '.'))
          ans++;
      }
    return ans;
  }
};
