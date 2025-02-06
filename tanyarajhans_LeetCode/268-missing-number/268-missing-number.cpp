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
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=n*(n+1)/2;
        int ss=0;
        for(int i=0;i<n;i++){
            ss+=nums[i];
        }
        return s-ss;
    }
};