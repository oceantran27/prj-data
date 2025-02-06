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
    vector<int> singleNumber(vector<int>& nums) {
        const int N=nums.size();
        int s = 0;
        for(auto x : nums){
            s ^=x;
        }
        int lowbit = s & -s;
        int a=0,b=0;
        for(auto x:nums){
            if((x & lowbit) == lowbit){
                a^=x;
            }else{
                b^=x;
            }
        }
        return vector<int>{a,b};   
    }
};