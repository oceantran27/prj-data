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
        int l=0;
        for(int i=0;i<=l;i++){
            l=max(l,i+nums[i]);
            if(l>=nums.size()-1)
                return true;
        }
        return false;
    }
};
