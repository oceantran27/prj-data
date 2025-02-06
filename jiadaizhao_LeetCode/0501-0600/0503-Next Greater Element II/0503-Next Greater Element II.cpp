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
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return {};
        }
        stack<int> St;
        vector<int> result(n, -1);
        for (int i = 0; i < 2 * n - 1; ++i) {
            while (!St.empty() && nums[St.top()] < nums[i % n]) {
                result[St.top()] = nums[i % n];
                St.pop();
            }
                
            St.push(i % n);
        }
        
        return result;
    }
};
