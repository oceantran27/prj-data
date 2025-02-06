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
    int searchInsert(vector<int>& nums, int target) 
    {
        int mid,left = 0, right = nums.size();
        while(left < right)
        {
            mid =  left+(right-left)/2;
            if(nums[mid] > target)
                right = mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                return mid;
        }
        return nums[mid]>target?mid:mid+1;
    }
};