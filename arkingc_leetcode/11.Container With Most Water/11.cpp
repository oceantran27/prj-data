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
        int l = 0,r = height.size() - 1;
        int res = 0;
        while(l < r){
            int minHeight = min(height[l],height[r]);
            res = max(res , (r - l) * minHeight);
            while(l < r && height[l] <= minHeight)  l++;
            while(l < r && height[r] <= minHeight)  r--;
        }
        return res;
    }
};