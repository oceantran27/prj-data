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
    /*
    *采用贪心法，计算能到达最远的地方
    */
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int max_jump = 0;
        for(int i=0;i<len;i++)
        {
            if( max_jump >= len -1 || i > max_jump )   //已经可以到达终点，或者无法到达当前位置
                break;
            max_jump = max( max_jump , i+nums[i]);
        }
        return max_jump >= len-1;
    }
};