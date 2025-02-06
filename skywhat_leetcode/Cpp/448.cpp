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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();++i){
            int index = abs(nums[i])-1;
            nums[index] = -abs(nums[index]);
        }
        
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>0){
                res.push_back(i+1);
            }
        }
        
        return res;
    }
};
