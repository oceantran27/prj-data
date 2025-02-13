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
    
    int findKthLargest(vector<int>& nums, int k) {
    
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
    
};