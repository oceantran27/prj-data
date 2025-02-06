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
    int jump(vector<int>& nums) {
        int sz = nums.size();
        vector<int> step(sz, 0);
        int last = 0;
        for(int i = 0; i < sz; i++){
            for(int j = last+1; j < min(i+nums[i]+1, sz); j++)
                step[j] = step[i]+1;
            last = max(last, i+nums[i]);
        }
        return step[sz-1];
    }
};
