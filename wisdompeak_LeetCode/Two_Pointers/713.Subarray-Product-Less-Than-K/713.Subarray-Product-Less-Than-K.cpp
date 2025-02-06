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
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if (k<=1) return 0;
        int j=0;
        int prod = 1;
        int count = 0;
        for (int i=0; i<nums.size(); i++)
        {            
            if (j<i)
            {
                j = i;
                prod = 1;
            }
            
            while (j<nums.size() && prod*nums[j]<k)
            {
                prod = prod*nums[j];
                j++;
            }
            count += j-i;
            prod = prod/nums[i];
        }
        return count;
    }
};
