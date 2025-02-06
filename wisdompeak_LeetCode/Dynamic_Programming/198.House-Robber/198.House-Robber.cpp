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
    int rob(vector<int>& nums) 
    {
        if (nums.size()==0)  return 0;
        
        int rob = nums[0], norob = 0;
        
        for (int i=1; i<nums.size(); i++)
        {
            int rob_tmp = rob, norob_tmp = norob;
            norob = max(rob_tmp, norob_tmp);
            rob = norob_tmp + nums[i];
        }
        return max(rob, norob);
    }
};
