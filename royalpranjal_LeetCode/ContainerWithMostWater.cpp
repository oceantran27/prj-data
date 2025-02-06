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
        
        int start = 0, end = height.size()-1;
        int sol = 0;
        
        while(start < end){
            int val = min(height[start],height[end])*(end-start);
            sol = max(sol, val);
            if(height[start] <= height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        
        return sol;
    }
};
