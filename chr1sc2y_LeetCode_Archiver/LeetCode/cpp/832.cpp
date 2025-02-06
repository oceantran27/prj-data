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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A) {
        for (int i = 0; i < A.size(); ++i) {
            int m = A[i].size();
            for (int j = 0; j < m / 2; ++j)
                swap(A[i][j], A[i][m - j - 1]);
            for (int j = 0; j < m; ++j)
                A[i][j] ^= 1;
        }
        return A;
    }
};