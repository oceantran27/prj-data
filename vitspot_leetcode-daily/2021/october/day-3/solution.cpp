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
        bool canJump(vector<int>& nums) {
            
            int len = nums.size();
            int reach_till = 0;
            
            for(int i=0; i<len;i++){
                
                if(reach_till < i) return false;
                
                reach_till = max(reach_till, i+ nums[i]);
            }
            return true;
        }
    };