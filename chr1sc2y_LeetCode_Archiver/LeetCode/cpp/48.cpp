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
    void rotate(vector<vector<int>> &matrix) {
        int size = matrix.size();
        for (int i = 0; i < size; ++i) {
            for (int j = i + 1; j < size; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < (size + 1) / 2; ++i) {
            for (int j = 0; j < size; ++j) {
                swap(matrix[j][i], matrix[j][size - i - 1]);
            }
        }
    }
};