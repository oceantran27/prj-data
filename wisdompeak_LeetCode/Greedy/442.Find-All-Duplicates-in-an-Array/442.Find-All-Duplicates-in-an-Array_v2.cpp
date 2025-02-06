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
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        nums.insert(nums.begin(),0);
        vector<int>results;
        for (int i=1; i<=n; i++)
        {
            if (nums[abs(nums[i])]<0)
                results.push_back(abs(nums[i]));
            else
                nums[abs(nums[i])] *= -1;                                  
        }
        return results;
    }
};
