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
        int n=nums.size();
        if(n==0) return 0;
        int inc=nums[0];
        int exc=0;
        for(int i=1;i<n;i++){
            int temp=inc;
            inc=max(inc,exc+nums[i]);
            exc=temp;
        }
        return max(inc,exc);
    }
};