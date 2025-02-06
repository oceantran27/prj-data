#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link to the "Search Insert Position" Problem ==>>  https://leetcode.com/problems/search-insert-position/
   
Link to the complete Explaination Video ==>> https://youtu.be/uOuMI58qlag

*/

class Solution {
public:
    
    int func(vector<int> nums, int low,int high, int target){

        int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(low==high){
            return mid;
        }
        else if(nums[mid]>target){
            return func(nums,low,mid,target);
        }
        else{
            return func(nums,mid+1,high,target);
        }
        return -1;
    }
    
    int searchInsert(vector<int>& nums, int target) {

        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        return func(nums,0,nums.size(),target);
    }
};