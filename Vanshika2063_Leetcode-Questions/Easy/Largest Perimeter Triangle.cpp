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
    int largestPerimeter(vector<int>& nums) {
        int end=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(1<end){
             if (nums[end] + nums[end - 1] > nums[end - 2] && nums[end] + nums[end - 2] >       nums[end - 1] && nums[end - 1] + nums[end - 2] > nums[end]){
            return nums[end] + nums[end - 1] + nums[end - 2];
        }
        end--;
    }
    return 0;
        
    }
};
