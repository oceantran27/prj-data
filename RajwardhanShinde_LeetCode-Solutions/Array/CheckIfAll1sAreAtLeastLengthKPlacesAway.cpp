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
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> ones;
        int pre = -10101;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]) {
                if(i - pre <= k)
                    return 0;
                    pre = i;
            }
        }
        return 1;
    }
};
