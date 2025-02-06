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
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        
        int max = 1;
        
        for(int i=0;i<nums.size();i++){
            // cout << "i=" << i << ':' << endl;
            int temp = 1;
            for(int j=i;j+1<nums.size();j++){
                // cout << "  j=" << j << ':' << nums[j] << "," << nums[j+1] << endl;
                if(nums[j+1] > nums[j])
                    temp += 1;
                else
                    break;
            }
            if(temp > max)
                max = temp;
        }
        return max;
    }
};

