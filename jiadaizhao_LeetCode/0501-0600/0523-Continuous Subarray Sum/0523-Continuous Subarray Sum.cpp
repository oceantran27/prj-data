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
    bool checkSubarraySum(vector<int>& nums, int k) {
        int presum = 0;
        unordered_map<int, int> table;
        table[0] = -1;
        for (int i = 0; i < nums.size(); ++i) {
            presum += nums[i];
            if (k != 0) {
                presum %= k;
            }
            if (table.find(presum) != table.end()) {
                if (i - table[presum] > 1) {
                    return true;
                }
            }
            else {
                table[presum] = i;
            }
        }
        
        return false;
    }
};
