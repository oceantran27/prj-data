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
    vector<int> runningSum(vector<int>& nums) {
        vector<int> b;
        long int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            b.push_back(sum);
        }
        return b;
    }
};
