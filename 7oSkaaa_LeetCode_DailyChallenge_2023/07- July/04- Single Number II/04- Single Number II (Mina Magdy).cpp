#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Mina Magdy

class Solution {
public:
    // Function to find the single number in the array
    int singleNumber(vector<int>& nums) {
        // Sort the array in ascending order
        sort(nums.begin(), nums.end());
        
        // Initialize the index variable to 0
        int idx = 0;
        
        // Iterate over the array, skipping three elements at a time
        for (int i = 1; i < nums.size() && nums[i] == nums[i - 1]; i += 3) {
            // Increment the index by 3
            idx += 3;
        }
        
        // Return the number at the calculated index
        return nums[idx];
    }
};
