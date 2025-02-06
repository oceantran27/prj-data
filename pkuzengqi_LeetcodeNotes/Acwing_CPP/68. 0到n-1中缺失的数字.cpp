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
    int getMissingNumber(vector<int>& nums) {
        int n=nums.size(),sum=0;
        for(auto &x:nums) sum+=x;
        return n*(n+1)/2-sum;
    }
};