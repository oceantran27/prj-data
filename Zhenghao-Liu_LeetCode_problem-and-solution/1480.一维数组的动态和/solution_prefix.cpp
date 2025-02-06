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
        vector<int> ans=nums;
        for (int i=1;i<nums.size();++i)
            ans.at(i)+=ans.at(i-1);
        return ans;
    }
};
