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
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), sum = 0;
        for(int i = 0; i < n; ++i) 
        {
            sum += mat[i][i]+mat[n-1-i][i];
        }
        if(n&1)
            sum -= mat[n/2][n/2];
        return sum;
    }
};