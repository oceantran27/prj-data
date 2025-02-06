#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
# include "headfile.h"
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int *bucket = new int[nums.size()]{0};
        for(int i = 0;i<nums.size();i++)
        {
            bucket[nums[i]] += 1;
            if(bucket[nums[i]]>1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};