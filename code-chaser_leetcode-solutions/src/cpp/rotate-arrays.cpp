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
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(k+i)%nums.size()]=nums[i];
        }
        
        nums=temp;
        
        return;
    }
};