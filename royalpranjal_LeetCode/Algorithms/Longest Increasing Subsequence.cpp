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
    int lengthOfLIS(vector<int>& nums) {
        int ans = 1, n = nums.size();
        
        if(!n){
            return 0;
        }
        
        vector<int> temp(n, 1);
        
        for(int i = 1; i < n; i++){
            for(int j = i - 1; j >= 0; j--){
                if(nums[i] > nums[j]){
                    temp[i] = max(temp[i], temp[j] + 1);
                }
            }
            ans = max(ans, temp[i]);
        }
        
        return ans;
    }
};
