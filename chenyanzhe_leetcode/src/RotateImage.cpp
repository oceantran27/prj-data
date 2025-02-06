#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include "RotateImage.hpp"

#include <algorithm>

using namespace std;

void RotateImage::rotate(vector<vector<int>> &matrix) {
    reverse(matrix.begin(), matrix.end());

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = i + 1; j < matrix.size(); j++)
            swap(matrix[i][j], matrix[j][i]);
    }
}
