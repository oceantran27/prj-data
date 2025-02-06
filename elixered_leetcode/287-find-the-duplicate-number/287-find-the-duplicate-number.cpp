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
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int dest = nums[i]-1;
            if(nums[i]==nums[dest])
                continue;
            swap(nums[i--],nums[dest]);
        }
        return nums.back();
    }
};