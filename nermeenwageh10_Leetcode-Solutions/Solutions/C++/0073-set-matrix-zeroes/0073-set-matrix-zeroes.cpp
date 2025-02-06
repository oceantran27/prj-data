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
    void setZeroes(vector<vector<int>>& matrix) {
        set <int> row , col ; 
        for (int i =0 ; i < matrix.size();i++)
            for (int j =0 ; j < matrix[i].size();j++)
            {
                if (matrix[i][j] == 0)
                {
                    row.insert(i); 
                    col.insert(j); 
                }
            }
        for (int r : row )
        {
            for (int j =0 ; j < matrix[r].size() ; j++)
                matrix[r][j] = 0 ; 
        }
        
        for (int c : col )
        {
            for (int i =0 ; i < matrix.size(); i++)
                matrix[i][c] =0;
        }
    }
};