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
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        int i=0,j=0;
        
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]>nums2[j])
                i++;
            else 
            {
                ans = max(ans,j-i);
                j++;
            }
        }
        return ans;
    }
};