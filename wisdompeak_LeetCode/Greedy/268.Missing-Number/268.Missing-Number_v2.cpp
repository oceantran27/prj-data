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
    int missingNumber(vector<int>& nums) 
    {
        int k=0;
        for (int i=0; i<=nums.size(); i++)
            k = k^i;
        for (int i=0; i<nums.size(); i++)
            k = k^nums[i];
        return k;
    }
};
