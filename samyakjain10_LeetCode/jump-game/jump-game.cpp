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
        int n = nums.size();
        
        int reachable = 0;
        
        for(int i=0; i<n; i++){
            if(i>reachable){
                return false;
            }
            reachable = max(reachable, i+nums[i]);
        }
        return true;
    }
};