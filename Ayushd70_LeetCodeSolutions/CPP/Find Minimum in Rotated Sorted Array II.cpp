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
        int low=0, high=nums.size()-1;
        if(nums[low]<nums[high])
                return nums[low];
        while(low<high) {
            int mid=low+(high-low)/2;
            if(nums[mid] > nums[high])
                low=mid+1;
            else if(nums[mid] < nums[high])
                high=mid;
            else
                high--;
        }
        return nums[low];
    }
};
