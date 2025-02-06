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
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minB = -1 , maxB = -1 , badB = -1;
        long long count = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]<minK || nums[i] > maxK) {
                badB = i;
            }
            if(nums[i] == minK)
            {
                minB = i;
            }
            if(nums[i] == maxK) {
                maxB = i;
            }
            count += max(0,min(minB,maxB)-badB);

        }
        return count;


    }
};
