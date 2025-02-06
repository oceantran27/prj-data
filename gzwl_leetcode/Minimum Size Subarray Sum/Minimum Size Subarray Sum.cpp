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
    int minSubArrayLen(int s, vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        if(!n)  return 0;
        int lhs = 0,rhs = 0;
        int sum = nums[0];
        while(rhs < n){
            if(sum >= s){
                if(!res || rhs - lhs + 1 < res){
                    res = rhs - lhs + 1;
                }
                sum -= nums[lhs++];
            }
            else{
                rhs++;
                if(rhs < n){
                    sum += nums[rhs];
                }
            }
        }
        return res;
    }
};
