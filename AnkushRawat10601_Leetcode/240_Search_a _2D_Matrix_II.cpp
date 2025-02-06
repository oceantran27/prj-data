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
                int last=(matrix[0]).size()-1;
       for(int i=0;i<matrix.size();i++){
                        if(matrix[i][last]<target) continue;
            for(int start=0;start<matrix[0].size();start++){
                int end=matrix[i].size()-start-1;
           if(matrix[i][start]==target || matrix[i][end]==target) return true;
           if(start>=end)  break;
           }
        }
        
        return false;
    }
};