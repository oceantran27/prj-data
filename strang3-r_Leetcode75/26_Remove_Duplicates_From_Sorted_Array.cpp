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
        for(int i{0}; i<nums.size()-1; ++i){
            if(nums.at(i) == nums.at(i+1)){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
