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
    bool checkPossibility(vector<int>& nums) 
    {
        int count=0;
        for (int i=1; i<nums.size(); i++)
        {            
            if (nums[i-1]>nums[i])
            {
                count++;
                
                if (count==2) return false;
                
                if (i>=2 && nums[i-2]>nums[i])
                    nums[i]=nums[i-1];
                else
                    nums[i-1]=nums[i];
            }
        }
        return true;
    }
};
