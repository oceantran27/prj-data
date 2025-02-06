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
    bool isGoodArray(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        for(int i=1; i<n; i++)
        {
            ans = gcd(ans,nums[i]);
            if(ans==1) return true;
        }
        return ans==1;
    }
};