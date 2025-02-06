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
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size()-1, k = 0;
        while(k <= j)
        {
        	if(nums[k]==2)
        	{
        		swap(nums[k],nums[j]);
        		j--;
        	}
        	else if(nums[k]==0)
        	{
        		swap(nums[k],nums[i]);
        		i++;k++;
        	}
            else
                k++;
        }
    }
};