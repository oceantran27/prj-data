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
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int minNum = INT_MAX;
        for (int num : nums) {
            sum += num;
            minNum = min(minNum, num);
        }
        
        return sum - minNum * nums.size();
    }
};
