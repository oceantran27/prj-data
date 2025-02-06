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
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int last = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            ans += max(0,last-nums[i]+1);
            last = max(last+1,nums[i]);
        }
        return ans;
    }
};