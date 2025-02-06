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
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> u;
        for (int i = 0; i < nums.size(); ++i) {
            int &&temp = target - nums[i];
            if (u.find(temp) != u.end())
                return {u[temp], i};
            u.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};