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
    void sortColors(vector<int>& nums) {
        
        int i=0,j=0,k=nums.size()-1;
        
        while(i<=k){
            if(nums[i] == 0){
                swap(nums[i++],nums[j++]);
            }
            else if(nums[i] == 2){
                swap(nums[i],nums[k--]);
            }
            else{
                i++;
            }
        }
        
        
    }
};