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
    int findMin(vector<int>& nums) {
    	if(nums.size() == 1||nums.front() < nums.back())
    		return nums.front();
        int l = 0, r = nums.size()-1, mid;
        while (l <= r)
        {
        	mid = l +((r-l)>>1);
        	if(nums[r] < nums[mid])
        		l = mid+1;
        	else if(nums[r] > nums[mid])
        		r = mid;
        	else
        		r--;
        }
        return nums[l];
    }
};