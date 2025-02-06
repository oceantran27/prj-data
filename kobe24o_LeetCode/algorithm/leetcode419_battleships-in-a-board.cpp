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
    int countBattleships(vector<vector<char>>& board) {
       	int m = board.size(), n = board[0].size();
       	int i, j, sum = 0;
       	for(i = 0; i < m; ++i)
       		for(j = 0; j < n; ++j)
       		{
       			if(board[i][j] == 'X')
       			{
       				sum += 1;
	       			if((i-1>=0 && board[i-1][j]=='X') || (j-1>=0 && board[i][j-1]=='X'))
	       				sum -= 1;
	       		}
       		}
   		return sum;
    }
};