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
    int minimumArrayLength(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for (int i=1; i<nums.size(); i++)
            if (nums[i]%nums[0]!=0)
                return 1;
        
        int i = 0;
        while (i<nums.size() && nums[i]==nums[0])
            i++;
        return (i+1)/2;        
    }
};
