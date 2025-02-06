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
    int arrayNesting(vector<int>& nums) {
        int maxLen = 0;
        for (int k = 0; k < nums.size(); ++k) {
            if (nums[k] != -1) {
                int len = 0;
                while (nums[k] != -1) {
                    int temp = k;                    
                    k = nums[k];
                    nums[temp] = -1;
                    ++len;
                }
                maxLen = max(maxLen, len);
            }
        }
        
        return maxLen;
    }
};
