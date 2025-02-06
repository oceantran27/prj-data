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
    int uniquePaths(int m, int n) {
        vector<int> maxV(n, 0);
        maxV[0] = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                maxV[j] = maxV[j - 1] + maxV[j];
            }
        }
        return maxV[n - 1];
    }
};