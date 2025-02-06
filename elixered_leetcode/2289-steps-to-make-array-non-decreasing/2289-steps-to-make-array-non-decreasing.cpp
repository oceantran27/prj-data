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
    int totalSteps(vector<int>& nums) {
        vector<int> a(nums.size()); 
        stack<int> s;
        int steps = 0; 
        for(int i = nums.size()-1;i>=0;i--){
            while(!s.empty() && nums[i]>nums[s.top()]){
                a[i] = max(a[i]+1, a[s.top()]); s.pop();
            }
            s.push(i);
            steps = max(steps, a[i]);
        }
        return steps;
    }
};