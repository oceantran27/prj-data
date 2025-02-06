#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


// 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // assert nums is valid...
        
        int len = nums.size();
        sort(nums.begin(), nums.end());
        return nums[len / 2]; 
    }
}; 
