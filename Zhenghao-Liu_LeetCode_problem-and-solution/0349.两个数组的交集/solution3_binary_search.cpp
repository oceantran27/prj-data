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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        unordered_set<int> ans;
        for (int &i:nums1)
            if (binary_search(nums2,i))
                ans.insert(i);
        return vector<int>(ans.begin(),ans.end());

    }
    bool binary_search(vector<int> & nums,int target)
    {
        int left=0,right=nums.size()-1;
        while (left<=right)
        {
            int mid=left+((right-left)>>1);
            if (nums.at(mid)==target)
                return true;
            else if (nums.at(mid)<target)
                left=mid+1;
            else
                right=mid-1;
        }
        return false;
    }
};
