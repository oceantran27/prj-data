#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Solution : https://leetcode.com/problems/unique-paths/
*/

 int uniquePaths(int m, int n) {
        int p[m][n];
        
        for (int i = 0 ; i < m ; i++)
            for (int j = 0; j < n; j++)
                p[i][j] = (i && j) ? p[i-1][j] + p[i][j-1] : 1;
        
        return p[m-1][n-1];
    }
