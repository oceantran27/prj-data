#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int i, j;
        i=1;
        for(j=1;j<nums.size();j++){
            if(nums[j]!=nums[j-1]) nums[i++]=nums[j];
        }
        return i;
    }
};