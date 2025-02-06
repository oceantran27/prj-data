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
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int n = matrix.size();
        if (n == 0) return 0;
        int m = matrix[0].size();
        if (m == 0) return 0;
        int l = 0, r = m*n;
        while (l+1<r){
            int mid = (l+r)/2;
            int x = mid/m, y = mid%m;
            if (matrix[x][y] <= target){
                l = mid;
            }else{
                r = mid;
            }
        }
        return matrix[l/m][l%m] ==  target;
    }
};


