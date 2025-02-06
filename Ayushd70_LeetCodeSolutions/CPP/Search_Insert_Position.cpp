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
    int searchInsert(vector<int>& nums, int target) {
        int i=0; 
    int j=nums.size()-1;
 
    while(i<=j){
        int mid = (i+j)/2;
 
        if(target > nums[mid]){
            i=mid+1;
        }else if(target < nums[mid]){
            j=mid-1;
        }else{
            return mid;
        }
    }
 
    return i;
    }
};
