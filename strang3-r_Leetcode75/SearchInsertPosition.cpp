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
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        
        while(start <=end){
            int mid = start + (end - start)/2;
            
            if(nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
            
        }
        return start;
    }
};
