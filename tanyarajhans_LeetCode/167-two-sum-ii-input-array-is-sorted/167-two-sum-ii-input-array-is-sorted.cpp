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
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            int s=nums[i]+nums[j];
            if(s==target){
                return {i+1,j+1};
            }
            else if(s>target){
                j--;
            }
            else {
                i++;
            }
        }
        return {-1,-1};
    }
};