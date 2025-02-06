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
    int removeDuplicates(vector<int>& nums) {
    int ind = 0;
    for (auto it : nums) 
    {
        if (ind < 2 or it > nums[ind-2]) 
        {
            nums[ind++] = it;
        }
    }
    return ind; 
    }
};