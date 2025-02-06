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
    int specialArray(vector<int>& nums) 
    {
        int right = nums.size();
        int left = 1;
        while (left <= right)
        {
            int mid = right-(right-left)/2;
            int count = 0;
            for (auto x: nums)
                if (x>=mid) count++;
            if (count == mid)
                return mid;
            else if (count > mid)
                left = mid+1;
            else
                right = mid-1;
        }
        return -1;
    }
};
