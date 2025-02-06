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
    int triangleNumber(vector<int>& nums) {
        int n = nums.size(), ans = 0, i = nums.size()-1;
        
        if(!n){
            return ans;
        }
        
        sort(nums.begin(), nums.end());
        
        while(i > 1){
            int j = 0, k = i-1;
            while(j < k){
                int sum = nums[j] + nums[k] - nums[i];
                if(sum > 0){
                    ans += k-j;
                    k--;
                }
                else{
                    j++;
                }
            }
            
            i--;
        }
        
        return ans;
    }
};
