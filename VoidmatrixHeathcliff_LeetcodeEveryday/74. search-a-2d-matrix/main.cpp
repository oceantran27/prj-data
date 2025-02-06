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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int iLengthColumn = matrix.size(), iLengthRow = matrix[0].size();
        for(int i = 0; i < iLengthColumn; i++)
            for (int j = 0; j < iLengthRow; j++)
                if (target == matrix[i][j]) return true;
        return false;
    }
};