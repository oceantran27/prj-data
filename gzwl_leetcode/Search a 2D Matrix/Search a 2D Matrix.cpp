#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Ѿ󿴳һm*n飬ȻֲҼ

class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int n = matrix.size();              //
        int m = n ? matrix[0].size() : 0;   //
        if(!n)  return false;
        int lhs = -1,rhs = n*m;
        while(rhs - lhs > 1){
            int mid = (lhs + rhs) / 2;
            int row = mid / m;
            int col = mid % m;
            if(matrix[row][col] > target)   rhs = mid;
            else if(matrix[row][col] < target)   lhs = mid;
            else    return true;
        }
        return false;
    }
};
