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
    int minArray(vector<int>& nums) {
        int left=0,right=nums.size()-1,mid;
        while (left<right)
        {
            mid=(left+right)/2;
            while (mid+1 < right && nums.at(mid) == nums.at(right))
                ++mid;
            if (nums.at(mid)>nums.at(right))
                left=mid+1;
            else
                right=mid;
        }
        return nums.at(left);
    }
};
