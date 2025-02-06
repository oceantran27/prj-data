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
    int arrayPairSum(vector<int>& nums) {
        int ans = 0, n = nums.size(), i = 0;
        
        if(n){
            sort(nums.begin(), nums.end());
        }
        
        while(i < n){
            ans = ans + min(nums[i], nums[i+1]);
            i = i + 2;
        }
        
        return ans;
    }
};
