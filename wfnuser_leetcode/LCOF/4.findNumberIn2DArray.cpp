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
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        if (n == 0) return false;
        
        int i = m - 1;
        int j = 0;

        while(true) {
            if (i < 0 || j >= n) return false;
            if (target == matrix[i][j]) return true;
            if (target > matrix[i][j]) {
                j++;
            } else {
                i--;
            }
        }

        return false;
    }
};