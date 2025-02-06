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
    bool canJump(vector<int>& nums) {
         int maxS = 0, i;
         for(i = 0; i < nums.size(); ++i)
         {
         	if(maxS < i)
         		return false;
         	maxS = max(maxS, nums[i]+i);
         }
         return true;
    }
};