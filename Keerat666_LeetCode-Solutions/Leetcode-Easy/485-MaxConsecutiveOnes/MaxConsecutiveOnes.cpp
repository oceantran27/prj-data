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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int res = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count=0;
            }
            else{
                count ++;
                res=max(count,res);
            }
        }
        
        return res;
    }
};