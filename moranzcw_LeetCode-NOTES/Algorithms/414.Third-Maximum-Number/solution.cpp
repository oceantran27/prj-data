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
    int thirdMax(vector<int>& nums) 
    {
        set<int> num;
        for(int i=0;i<nums.size();i++)
        {
            num.insert(nums[i]);
        }
        set<int>::reverse_iterator it=num.rbegin();
        if(num.size()<3)
           return *it; 
           
        it++;
        it++;
        return *it;
    }
};