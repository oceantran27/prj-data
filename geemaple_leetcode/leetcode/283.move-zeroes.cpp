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
        int i = 0;
        for(auto j = 0; j < nums.size(); ++j)
        {
            if (nums[j] != 0)
            {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
                
                i++;
            }
        }
    }
};