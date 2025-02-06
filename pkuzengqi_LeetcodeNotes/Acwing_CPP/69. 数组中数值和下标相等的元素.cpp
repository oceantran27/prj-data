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
    int getNumberSameAsIndex(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i<n && nums[i]<0) ++i;
        while(i<n){
            if(i==nums[i]) return i;
            ++i;
        }
        return -1;
    }
};