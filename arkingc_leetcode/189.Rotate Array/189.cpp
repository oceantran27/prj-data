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
        k = k % nums.size(); 
        if(k == 0)  return;
        int sz = nums.size();
        int l = 0,r = sz - 1;
        while(l < r) {  swap(nums[l++],nums[r--]);}
        l = 0,r = k - 1;
        while(l < r) {swap(nums[l++],nums[r--]);}
        l = k,r = sz - 1;
        while(l < r) {swap(nums[l++],nums[r--]);}
    }
};