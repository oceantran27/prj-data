#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Omar Wael
// leetcode account : https://leetcode.com/OmarWael1/

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        // cnt -> count the number of consuctive zeros
        long long ans=0,cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                // increase cnt
                cnt++;
                // update ans
                ans+=cnt;
            }else{
                cnt=0;
            }
        }
        return ans;
    }
};
