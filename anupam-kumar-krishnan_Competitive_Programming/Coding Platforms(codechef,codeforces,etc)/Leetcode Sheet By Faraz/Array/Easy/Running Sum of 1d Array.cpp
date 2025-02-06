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
    vector<int> runningSum(vector<int> &nums) {
                vector<int> result = {nums[0]};

        for (int i = 1; i < nums.size(); i++) {
            result.push_back(result.back() + nums[i]);
        }
        return result;
    }
};
