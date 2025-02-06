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
    int rob(vector<int>& nums) {
        int i,money=0;
        for(i=0;i<nums.size();i+=2)
            money=money+nums[i];
        return money;
    }
};
