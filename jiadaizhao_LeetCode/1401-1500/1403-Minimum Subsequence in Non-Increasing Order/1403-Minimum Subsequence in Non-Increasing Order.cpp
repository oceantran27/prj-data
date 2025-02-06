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
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(),greater<int>());
        int total = accumulate(nums.begin(), nums.end(), 0);
        vector<int> result;
        int curr = 0;
        for (int num : nums) {
            result.push_back(num);
            curr += num;
            if (curr > total - curr) {
                break;
            }
        }
        return result;
    }
};
