#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 229 Majority Element II.cpp

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int n : nums) {
            if (++m[n] == nums.size() / 3 + 1) {
                ans.push_back(n);
            }
        }
        return ans;
    }
};