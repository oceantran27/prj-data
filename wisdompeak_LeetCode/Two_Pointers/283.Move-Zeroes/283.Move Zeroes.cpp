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
    void moveZeroes(vector<int>& nums) 
    {
        int left=0;
        int right=0;
        
        while (right<nums.size())
        {
            if (nums[right]==0)
            {
                right++;
            }
            else
            {
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
                
        }
        
    }
};
