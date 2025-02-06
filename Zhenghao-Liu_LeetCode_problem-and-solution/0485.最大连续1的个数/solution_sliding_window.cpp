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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int nums_size=nums.size();
        for (int i=0;i<nums_size;++i)
        {
            if (nums.at(i)==1)
            {
                int left=i;
                while (i<nums_size && nums.at(i)==1)
                    ++i;
                ans=max(ans,i-left);
            }
        }
        return ans;
    }
};
