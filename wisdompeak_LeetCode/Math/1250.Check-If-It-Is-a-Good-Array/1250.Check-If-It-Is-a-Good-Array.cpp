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
    bool isGoodArray(vector<int>& nums) 
    {
        int k = nums[0];
        for (int i=1; i<nums.size(); i++)
        {
            k = gcd(k,nums[i]);
            if (k==1) return true;
        }
        return k==1;
    }
};
