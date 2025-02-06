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
    int maxArea(vector<int>& height) {
        int res=0;
        for(int i=0,j=height.size()-1;i<j;)         {
          res = max (res,(j-i) * min(height[i],height[j]));
          if(height[i]<height[j]) ++i;
          else --j;
        }
        return res;
    }
};