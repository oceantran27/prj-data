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
    vector<string> readBinaryWatch(int num) {
        vector<string> result;
        vector<int> hours = {8, 4, 2, 1};
        vector<int> mins = {32, 16, 8, 4, 2, 1};
        for (int i = 0; i <= num; ++i) {
            vector<int> hr = generateDigit(hours, i, 11);
            vector<int> mr = generateDigit(mins, num - i, 59);
            for (int& h : hr) {
                for (int& m : mr) {
                    result.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
                }
            }
        }
        
        return result;
    }

private:    
    vector<int> generateDigit(vector<int>& nums, int count, int threshold) {
        vector<int> res;
        dfs(nums, 0, count, 0, threshold, res);
        return res;
    }
    
    void dfs(vector<int>& nums, int start, int count, int val, int threshold, vector<int>& res) {
        if (count == 0) {
            res.push_back(val);
            return;
        }
        
        for (int i = start; i < nums.size() && nums.size() - i >= count; ++i) {
            if (val + nums[i] <= threshold) {
                dfs(nums, i + 1, count - 1, val + nums[i], threshold, res);
            }
        }
    }
};
