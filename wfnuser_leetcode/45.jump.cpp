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
        int border = 0;
        int nextBorder = 0;

        int step = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            nextBorder = max(nextBorder, i + nums[i]);
            
            if (i == border) {
                border = nextBorder;
                step++;
            }
        }

        return step;
    }
};