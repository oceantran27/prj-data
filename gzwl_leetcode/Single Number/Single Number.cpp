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
    int singleNumber(vector<int>& nums) {
        //因为只有一个数出现一次，其他都出现两次，所以一遍XOR运算结果就是答案了
        int res = 0;
        for(int i = 0 ;i < nums.size(); i++){
            res ^= nums[i];
        }
        return res;
    }
};
