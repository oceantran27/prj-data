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
        int nums_size=nums.size();
        nth_element(nums.begin(),nums.begin()+(nums_size-k),nums.end());
        return nums.at(nums_size-k);
    }
};
