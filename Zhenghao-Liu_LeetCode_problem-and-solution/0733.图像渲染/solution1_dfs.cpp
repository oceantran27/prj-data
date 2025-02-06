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
    vector<vector<int>> dir={{-1,0},{1,0},{0,-1},{0,1}};
    vector<vector<bool>> use; 
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int row=image.size();
        int column=image.at(0).size();
        use=vector<vector<bool>>(row,vector<bool>(column,false));
        dfs(image,image.at(sr).at(sc),newColor,sr,sc,row,column);
        return image;
    }
    void dfs(vector<vector<int>> &image,int target,int newColor,int x,int y,int row,int column)
    {
        use.at(x).at(y)=true;
        image.at(x).at(y)=newColor;
        for (vector<int> &i:dir)
        {
            int xx=x+i.at(0);
            int yy=y+i.at(1);
            if (xx>=0 && xx<row && yy>=0 && yy<column && !use.at(xx).at(yy) && image.at(xx).at(yy)==target)
                dfs(image,target,newColor,xx,yy,row,column);
        }
    }
};
