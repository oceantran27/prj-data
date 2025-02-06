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
    bool increasingTriplet(vector<int>& nums) {
        int small = INT_MAX, big = INT_MAX;
        for(auto val: nums)
        {
            if(val <= small) 
                small = val;
            else if(val <= big) 
                big = val;
            else   //比两个数都大，已找到递增三元组
                return true;
        }
        return false;

    }
};