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
    int minOperations(vector<int>& nums, vector<int>& numsDivide) 
    {
        int x = numsDivide[0];
        
        for (int i=1; i<numsDivide.size(); i++)
            x = gcd(x, numsDivide[i]);
        
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size(); i++)
        {
            if (x%nums[i]==0)
                return i;
        }
        
        return -1;
        
    }
};
