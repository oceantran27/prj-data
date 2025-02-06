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
    int missingNumber(vector<int>& nums) {
        int sum = (nums.size() * (nums.size() + 1)) / 2;
        for (int i = 0; i < nums.size(); i++)
            sum -= nums[i];
        return sum;
    }
};