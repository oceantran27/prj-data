#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int maxArea(vector<int> &height) 
    {
        int left = 0;
        int right = height.size() -1;

        int maxArea = 0;
        while(left < right)
        {
            int area = (right - left)*min(height[left],height[right]);
            maxArea = max(maxArea,area);

            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }
};