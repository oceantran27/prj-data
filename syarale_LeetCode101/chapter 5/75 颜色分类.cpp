#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 75.ɫ()

class Solution {
public:
    void swap(vector<int>& nums, int i, int j) {
        //assert(0 <= i && i <= j && j <= len - 1);
        
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
        return;
    }
    
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        
        if (nums.empty() || len == 1) {
            return;
        }
        
        int left = -1, right = len;
        int j = 0;
        
        while (j < right) {
            if (nums[j] == 0) {
                left ++;
                swap(nums, left, j);
                j++;
            } else if (nums[j] == 2) {
                right --;
                swap(nums, j, right);
            } else if (nums[j] == 1) {
                j ++;
            }
        }
        
        return;
    }
}; 
