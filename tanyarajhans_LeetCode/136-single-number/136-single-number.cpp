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
    int singleNumber(vector<int>& nums) {
        int x=nums[0];
        for(int i=1;i<nums.size();i++){
            x^=nums[i];
        }
        return x;
    }
};