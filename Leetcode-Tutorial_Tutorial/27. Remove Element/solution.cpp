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
    int removeElement(vector<int>& nums, int val) {
        int l = 0;
        int len = nums.size();
        for(int r = 0; r < len; r++){
            if(nums[r] != val)
                nums[l++] = nums[r];
        }
        return l;
    }
};