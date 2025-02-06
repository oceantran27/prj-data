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
        int i = 0, j = height.size()-1, s, maxS = 0;
        while(i <= j)
        {
        	if(height[i] > height[j])
        	{
        		s = (j-i)*height[j];
        		--j;
        	}
        	else
        	{
        		s = (j-i)*height[i];
        		++i;
        	}
        	if(s > maxS)
        		maxS = s;
        }
        return maxS;
    }
};