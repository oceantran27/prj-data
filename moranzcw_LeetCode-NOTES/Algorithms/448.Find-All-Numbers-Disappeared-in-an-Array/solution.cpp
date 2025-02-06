#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> result(nums.size(),-1);
        for(int i=0;i<nums.size();i++)
            result[nums[i]-1] = 1;
        int flag = 0;
        for(int i=0;i<result.size();i++)
        {
            if(result[i] == -1)
            {
                result[flag] = i+1;
                flag++;
            }
        }
        result.erase(result.begin()+flag, result.end());
        return result;
    }
};