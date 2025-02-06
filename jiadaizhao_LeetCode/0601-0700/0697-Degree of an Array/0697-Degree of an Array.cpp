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
    int findShortestSubArray(vector<int>& nums) {
        int freq = 0;
        unordered_map<int, int> start;
        unordered_map<int, int> count;
        int len = nums.size();
        for (int i = 0; i < nums.size(); ++i) {
            if (start.find(nums[i]) == start.end()) {
                start[nums[i]] = i;
            }
            ++count[nums[i]];
            if (count[nums[i]] > freq) {
                freq = count[nums[i]];
                len = i - start[nums[i]] + 1;
            }
            else if (count[nums[i]] == freq) {
                len = min(len, i - start[nums[i]] + 1);
            }            
        }
        
        return len;
    }
};
