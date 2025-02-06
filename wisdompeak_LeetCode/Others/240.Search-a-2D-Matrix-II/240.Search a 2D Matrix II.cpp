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
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int M=matrix.size();
        if (M==0) return false;
        int N=matrix[0].size();
        
        int i=M-1;
        int j=0;
        while (i>=0 && j<=N-1)
        {
            if (matrix[i][j]==target)
                return true;
            else if (matrix[i][j]<target)
                j++;
            else if (matrix[i][j]>target)
                i--;
        }
        return false;
    }
};
