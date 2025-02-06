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
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maxLeft = 0, maxRight = 0, sum = 0;
        while (left < right) {
            if (height[left] <= height[right]) {
                sum += max(0, maxLeft - height[left]);
                maxLeft = max(maxLeft, height[left]);
                ++left;
            }
            else {
                sum += max(0, maxRight - height[right]);
                maxRight = max(maxRight, height[right]);
                --right;
            }
        }
        
        return sum;
    }
};
