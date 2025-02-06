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
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>Map;
        Map[0] = 1;
        
        int r = 0;
        int count = 0;
        for (int i=0; i<nums.size(); i++)
        {            
            r = ((r + nums[i]) % k + k) % k;
            count += Map[r];
            Map[r]++;
        }
        return count;
    }
};
