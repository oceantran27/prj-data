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
    int maxSubArray(vector<int>& nums) {
        int sum = 0,max = INT_MIN;
        for(int num : nums){
            if(sum > 0) sum += num;
            else    sum = num;
            if(sum > max)   max = sum;
        }
        return max;
    }
};