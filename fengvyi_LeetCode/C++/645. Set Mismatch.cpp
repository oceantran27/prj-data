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
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size(), sum = 0, dup = 0, miss = 0;
        vector<int>count(n, 0);
        for(int i = 0; i < n; sum += nums[i++]) if(++count[nums[i] - 1] > 1) dup = nums[i];
        miss = n * (n + 1) / 2 - sum + dup;
        return {dup, miss};
    }
};
