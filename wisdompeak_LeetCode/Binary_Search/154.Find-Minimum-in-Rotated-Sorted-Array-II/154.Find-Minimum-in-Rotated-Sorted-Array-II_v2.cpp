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
    int findMin(vector<int>& nums) 
    {
        int left = 0;
        int right = nums.size()-1;
        
        while (left<right)
        {
            int mid = left+(right-left)/2;  
            if (nums[mid] > nums[right])
                left = mid+1;
            else if (nums[mid] < nums[right])
                right = mid;
            else
                right -= 1;
        }
        return nums[left];
    }
};


