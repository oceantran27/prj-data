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
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> minSum = triangle.back();
        int n = triangle.size();
        for (int i = n - 2; i >= 0; --i) {
            for (int j = 0; j <= i; ++j) {
                minSum[j] = min(minSum[j], minSum[j + 1]) + triangle[i][j]; 
            }
        }
        return minSum[0];
    }
};
