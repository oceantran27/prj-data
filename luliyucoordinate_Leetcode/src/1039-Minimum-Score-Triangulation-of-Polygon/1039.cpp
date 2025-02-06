#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    int minScoreTriangulation(vector<int>& A) 
    {
        int n = A.size();
        vector<vector<int>> mem(n, vector<int>(n));
        for (int j = 2; j < n; ++j) 
        {
            for (int i = j - 2; i >= 0; --i) 
            {
                mem[i][j] = INT_MAX;
                for (int k = i + 1; k < j; ++k)
                    mem[i][j] = min(mem[i][j], mem[i][k] + mem[k][j] + A[i] * A[j] * A[k]);
            }
        }
        return mem[0][n - 1];
    }
};