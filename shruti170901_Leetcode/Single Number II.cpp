#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0, two=0, three=0;
        for(int i:nums){
            two|=one & i;
            one^=i;
            three=one&two;
            one &= ~three;
            two &= ~three;
            
        }
        return one;
    }
};