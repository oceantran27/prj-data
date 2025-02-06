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
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        int mask = 0;
        
        for(auto i : nums){
            ans = ans ^ i;
            ans = ans ^ mask;
            mask++;
        }
        
        return ans;
    }
};
