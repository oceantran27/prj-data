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
    int pivotIndex(vector<int>& nums) {
        int ans = -1;
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
        }
        int leftSum = 0 , rightSum = 0;
        rightSum = sum;      
        for(int i=0; i<n; i++)
        {
            rightSum -= nums[i];            
            if(leftSum == rightSum)
            {
                ans = i;
                break;
            }            
            leftSum += nums[i];
        }        
        return ans;
    }
};