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
        if (nums.size() == 1) return 0;
        int m = INT_MAX;

        for (auto num: nums) {
            m = min(m, num); 
        }
        int ans = 0;

        for (auto num: nums) {
            ans += (num-m);
        }

        return ans;
    }
};