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
        int n=nums.size();
        vector<int> ps(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                ps[i]+=nums[j];
            }
        }
        return ps;
    }
};
