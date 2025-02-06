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
    int missingNumber(vector<int> &nums) {
        int sum = 0;
        for (auto num: nums)
            sum += num;
        int numsLength = nums.size();
        int total = numsLength * (numsLength + 1) / 2;
        return total - sum;
    }
};