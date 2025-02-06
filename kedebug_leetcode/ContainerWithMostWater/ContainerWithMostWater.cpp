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
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (height.size() < 2)
            return 0;
        int left = 0;
        int right = height.size() - 1;
        int maxarea = 0;
        while (left < right) {
            maxarea = max(maxarea, min(height[left], height[right]) * (right - left));
            if (height[left] < height[right]) 
                left += 1;
            else
                right -= 1;
        }
        return maxarea;
    }
};