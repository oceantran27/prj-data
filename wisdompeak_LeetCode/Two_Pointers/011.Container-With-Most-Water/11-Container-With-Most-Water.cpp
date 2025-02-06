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
    int maxArea(vector<int>& height) 
    {
        int left=0;
        int right=height.size()-1;
        
        int temp=0;
        int result=0;
        
        while (left<right)
        {
            int temp = (right-left)*min(height[left],height[right]);
            if (temp>result) result=temp;
            
            if (height[left]>=height[right])
                right--;
            else
                left++;
        }
        
        return result;
        
    }
};
