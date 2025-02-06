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
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n) {
        if (m * n != original.size())
            return {};
        vector<vector<int>> arr(m, vector<int>(n));
        for (int i = 0, k = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = original[k++];
            }
        }
        return arr;
    }
};
