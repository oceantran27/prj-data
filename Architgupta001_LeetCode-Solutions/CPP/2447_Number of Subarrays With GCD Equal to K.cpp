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
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i<n ; ++i)
        {
            if(nums[i] == k)
                ans++;
            int start = nums[i];
            for(int j = i+1; j<n ; ++j)
            {
                if(__gcd(start,nums[j]) == k){
                    ans++;
                }
                start = __gcd(start,nums[j]);
            }
            // cout << ans << endl; 
        }
        return ans;
    }
};
