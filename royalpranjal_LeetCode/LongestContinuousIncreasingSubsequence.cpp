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
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        
        int temp = 1, ans = 1, i = 1, n = nums.size();
        
        while(i < n){
            if(nums[i] > nums[i-1]){
                temp++;
            }
            else{
                temp = 1;
            }
            ans = max(temp, ans);
            i++;
        }
        
        return ans;
    }
};
