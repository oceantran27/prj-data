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
    int triangleNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int count=0;

        for (int k=nums.size()-1; k>=0; k--)
        {
            int i=0;
            int j=k-1;
            while (i<j)
            {
                if (nums[i]+nums[j]>nums[k])
                {
                    count+=j-i;
                    j--;
                }
                else
                    i++;
            }                   
        }
        return count;
    }
};
