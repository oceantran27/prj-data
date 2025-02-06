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
    int findPeakElement(vector<int>& nums) {
        if( nums.size()==1 || nums[0]>nums[1]  ) return 0;
        
        int l=1, r=nums.size()-1;
        while( l < r ){
            int mid = l + r + 1 >> 1;
            if( nums[mid] > nums[mid-1] )
                l = mid;
            else
                r = mid - 1;
        }
        
        return l;
    }
};