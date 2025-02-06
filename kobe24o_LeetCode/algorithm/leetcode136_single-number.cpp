#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {//异或操作
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i)
        	nums[0] ^= nums[i];
        return nums[0];
    }
};