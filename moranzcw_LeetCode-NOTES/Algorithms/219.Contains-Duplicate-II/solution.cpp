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
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        set<int> s;
        int start = 0, end = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if( s.find(nums[i]) == s.end() )
            {
                s.insert(nums[i]);
                end++;
            }
            else
            {
                return true;
            }
            
            if(end - start > k)
            {
                s.erase(nums[start]);
                start++;
            }
        }
        return false;
    }
};