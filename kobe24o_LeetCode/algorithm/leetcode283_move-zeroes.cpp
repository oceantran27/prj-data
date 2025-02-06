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
    void moveZeroes(vector<int>& nums) {
        int zeros = 0, i;
        for(i = 0; i < nums.size(); ++i)
        {
        	if(nums[i] != 0)
        		nums[i-zeros] = nums[i];
        	else
        		++zeros;
        }
        i = nums.size()-1;
        while(zeros--)
        	nums[i--] = 0;
    }
};