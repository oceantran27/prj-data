#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

136. Single Number

Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?






class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for(int num:nums){
            ret^=num;
        }
        return ret;
    }
};