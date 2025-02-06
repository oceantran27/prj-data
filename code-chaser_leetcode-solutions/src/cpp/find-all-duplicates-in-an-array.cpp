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
vector<int> findDuplicates(vector<int> &nums)
{
    unordered_map<int,int>mp;
    vector<int>ans;
    for (size_t i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]=0;
    }
    for (size_t i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        if(mp[nums[i]]==2){
            ans.push_back(nums[i]);
        }
    }

return ans;}
};
