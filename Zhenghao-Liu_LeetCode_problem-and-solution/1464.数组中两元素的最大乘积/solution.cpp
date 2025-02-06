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
    int maxProduct(vector<int>& nums) {
        int nums_size=nums.size();
        int ans=INT_MIN;
        for (int i=0;i<nums_size;++i)
            for (int j=i+1;j<nums_size;++j)
                ans=max(ans,(nums[i]-1)*(nums[j]-1));
        return ans;
    }
};
