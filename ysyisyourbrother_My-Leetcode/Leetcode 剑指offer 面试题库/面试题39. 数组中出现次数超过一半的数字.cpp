#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "headfile.h"
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 摩尔投票法
        int count = 0; // 记录当前数
        int cur; // 当前数
        for(auto i : nums)
        {
            if(count == 0) 
                cur = i, count++;
            else if(i!=cur)
                count--;
            else if(i==cur)
                count++;
        }
        return cur;
    }
};