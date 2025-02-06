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
    int removeDuplicates(vector<int>& nums) 
    {
        int i=0;
        int j=1;
        
        while (j<nums.size())
        {
            if (nums[j]==nums[j-1])
            {
                j++;
            }
            else
            {
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return i+1;
    }
};
