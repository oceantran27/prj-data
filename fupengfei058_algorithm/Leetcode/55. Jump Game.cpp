#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*Jump Game:Given an array of non-negative integers, you are initially positioned at the first index of the array.*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int overflow = 0;
        for(int i = 0; i < nums.size() - 1; i++){
        	if(overflow < i) return false;
        	int k = i + nums[i];
        	if(k > overflow) overflow = k;
        }
        return overflow >= nums.size() - 1;
    }
};