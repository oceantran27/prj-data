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
    int findDuplicate(vector<int>& nums) 
    {
        int n = nums.size()-1;
        nums.insert(nums.begin(), 0);
        for (int i=1; i<=n+1; i++)
        {
            while (nums[i]!=i && nums[i]<=n+1 && nums[i]!=nums[nums[i]])
                swap(nums[i], nums[nums[i]]);
        }
        for (int i=1; i<=n+1; i++)
        {
            if (nums[i]!=i)
                return nums[i];
        }
        return -1;
    }
};
