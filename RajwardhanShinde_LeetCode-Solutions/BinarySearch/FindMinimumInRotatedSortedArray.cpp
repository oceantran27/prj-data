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
        int low = 0, high = nums.size() - 1;
        while(low < high) {
            if(nums[low] < nums[high])
                return nums[low];
            int mid = (low + high) / 2;
            if(nums[mid] >= nums[low]) 
                low = mid + 1;
            else
                high = mid;
        }
        return nums[low];
    }
};
