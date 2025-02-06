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
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<long, int> mp;
        int res = 0;
        for(int i = 0; i < nums.size(); ++i)
            for(int j = i + 1; j < nums.size(); ++j){             
                int product = nums[i] * nums[j];
                res += 8 * mp[product];
                mp[product]++;
            }
        return res;
    }
};