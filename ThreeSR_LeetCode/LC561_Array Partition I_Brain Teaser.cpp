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
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 排序
        int result = 0;
        for (int i = 0; i < nums.size(); i += 2) { // 每间隔2个单位，取一个数值相加
            result += nums[i];
        }
        return result;
    }
};
