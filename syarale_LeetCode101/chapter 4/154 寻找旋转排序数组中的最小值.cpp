#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 154.ѰתеСֵ II 

class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        
        // assert(!nums.empty());
        
        int l = 0, r = len - 1;
        if (nums[l] < nums[r]) {
            return nums[l];
        }
        
        while (l < r - 1) {
            int mid = l + (r - l) / 2;
            
            if (nums[l] < nums[r]) {
                return nums[l];
            }
            
            if (nums[mid] > nums[l]) {
                l = mid;
            } else if (nums[mid] < nums[r]) {
                r = mid;
            } else if (nums[mid] == nums[l] && nums[mid] != nums[r]) {
                l = mid;
            } else if (nums[mid] == nums[r] && nums[mid] != nums[l]) {
                r = mid;
            } else if (nums[mid] == nums[l] && nums[mid] == nums[r]) {
                l++;
            }
        }
        
        return nums[r];
    }
};
