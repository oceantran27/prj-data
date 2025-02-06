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
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = 0;
        int e = n;
        
        vector<int> v;
        
        while(s<e)
        {
            v.push_back(nums[s]);
            v.push_back(nums[n]);
            s++; 
            n++;
        }
        return v;
    }
};
