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
    int singleNumber(vector<int>& nums) {
        int ans = 0, i, j, bit, cnt;
        for(i = 0; i < 32; i++) 
        {
            bit = 1 << i;
            cnt = 0;
            for(j = 0; j < nums.size(); j++) 
            {
                if((nums[j] & bit) != 0) 
                    cnt++;
            }
            if(cnt % 3 != 0)
                ans |= bit;
        }
        return ans;
    }
};