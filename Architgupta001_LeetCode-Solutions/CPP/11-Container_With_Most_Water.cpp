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
        int ans = 0, i=0, j=height.size()-1;
        
        while(i<j)
        {
            int x = min(height[i], height[j])*(j-i);
            ans = max(ans, x);
            if(height[i]<height[j])
            i++;
            else 
            j--;
        }
        return ans;
    }
};
