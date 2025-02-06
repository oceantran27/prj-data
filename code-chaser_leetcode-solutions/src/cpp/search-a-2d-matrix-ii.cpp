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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        while(i<rows && j>=0){
            if(matrix[i][j]==target)
                return 1;
            else if(matrix[i][j]>target)
                j--;
            else 
                i++;
        }
        return 0;
    }
};