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
    int search(vector<int>& nums, int target) {
        int index = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(index < nums.size())
            if(nums[index] == target)
            return index;
        return -1;
    }
    
};
