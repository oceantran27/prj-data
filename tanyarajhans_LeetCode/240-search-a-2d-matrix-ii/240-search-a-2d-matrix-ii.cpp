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
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        int r=0,c=m-1;
        while(r<n && c>=0){
            if(mat[r][c]==target){
                return true;
            }
            else if(mat[r][c]>target){
                c--;
            }
            else
                r++;
        }
        return false;
    }
};