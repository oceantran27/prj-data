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
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> result;
        int i = 0, j = 0;
        while (i < A.size() && j < B.size()) {
            int start = max(A[i][0], B[j][0]);
            int end = min(A[i][1], B[j][1]);
            if (start <= end) {
                result.push_back({start, end});
            }
            
            if (A[i][1] <= B[j][1]) {
                ++i;
            }
            else {
                ++j;
            }
        }
        return result;
    }
};
