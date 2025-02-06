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
    int removeElement(vector<int>& nums, int val) 
    {
        int length = 0;
        for(int i=0,j=0;j<nums.size();j++)
        {
            if(nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
                length ++;
            }
        }
        return length;
    }
};