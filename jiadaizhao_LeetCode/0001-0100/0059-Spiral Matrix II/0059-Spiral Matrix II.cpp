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
    vector<vector<int>> generateMatrix(int n) {
        if (n <= 0) {
            return {};
        }
        vector<vector<int>> result(n, vector<int>(n));
        int rowStart = 0, rowEnd = n - 1;
        int colStart = 0, colEnd = n - 1;
        int val = 1;
        while (rowStart <= rowEnd && colStart <= colEnd) {
            for (int j = colStart; j <= colEnd; ++j) {
                result[rowStart][j] = val++;
            }
            ++rowStart;
            
            for (int i = rowStart; i <= rowEnd; ++i) {
                result[i][colEnd] = val++;
            }
            --colEnd;
            
            if (rowStart <= rowEnd) {
                for (int j = colEnd; j >= colStart; --j) {
                    result[rowEnd][j] = val++;
                }
                --rowEnd;
            }
            
            if (colStart <= colEnd) {
                for (int i = rowEnd; i >= rowStart; --i) {
                    result[i][colStart] = val++;
                }
                ++colStart;
            }
        }
        
        return result;
    }
};
