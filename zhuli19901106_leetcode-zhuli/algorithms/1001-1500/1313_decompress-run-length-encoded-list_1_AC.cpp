#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
// https://leetcode.com/problems/decompress-run-length-encoded-list/
#include <vector>
using std::vector;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int i, j;
        int val, count;
        for (i = 0; i + 1 < n; i += 2) {
            count = nums[i];
            val = nums[i + 1];
            for (j = 0; j < count; ++j) {
                res.push_back(val);
            }
        }
        return res;
    }
};
