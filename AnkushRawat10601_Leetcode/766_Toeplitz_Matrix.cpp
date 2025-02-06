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
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
           stack<pair<int,int>> st;   
    for(int i =0;i<matrix.size();i++){
        st.push({i,0});
    }  
    for(int i=0;i<matrix[0].size();i++){
        st.push({0,i});
    }
   
    while(st.size()){
      int x = st.top().first;
      int y = st.top().second;
      int val  = matrix[x][y];
      st.pop();
        //**** checking for each of the diagonal 
           while(x<matrix.size()&& y<matrix[0].size()){
               if(matrix[x][y]!=val)return false;
               x++,y++;
           }
    }

    return true;  
    }
};