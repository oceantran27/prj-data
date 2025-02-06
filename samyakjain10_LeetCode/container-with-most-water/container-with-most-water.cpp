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
        int ans = 0;
        int left = 0, right = height.size() - 1;
        while (left < right) {
            int h = min(height[left], height[right]);
            ans = max(ans, (right - left) * h);
            while (height[left] <= h && left < right) left++;
            while (height[right] <= h && left < right) right--;
        }
        return ans;
    }
};