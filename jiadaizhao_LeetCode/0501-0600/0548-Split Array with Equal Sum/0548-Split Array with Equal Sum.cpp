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
    bool splitArray(vector<int>& nums) {
        int n = nums.size();
        if (n < 7) {
            return false;
        }
        
        vector<int> presum(1 + n);
        for (int i = 1; i <= n; ++i) {
            presum[i] = presum[i - 1] + nums[i - 1];
        }
        
        for (int j = 3; j < n - 3; ++j) {
            unordered_set<int> table;
            for (int i = 1; i < j - 1; ++i) {
                if (presum[i] == presum[j] - presum[i + 1]) {
                    table.insert(presum[i]);
                }
            }
            
            for (int k = j + 2; k < n - 1; ++k) {
                if (presum[k] - presum[j + 1] == presum[n] - presum[k + 1] && table.count(presum[k] - presum[j + 1])) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
