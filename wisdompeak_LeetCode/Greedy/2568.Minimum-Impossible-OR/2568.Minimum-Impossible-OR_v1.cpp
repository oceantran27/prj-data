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
    int minImpossibleOR(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int mx = 0;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] > mx+1)
                return mx+1;
            else
                mx = (mx | nums[i]);
        }

        return mx+1;        
    }
};
