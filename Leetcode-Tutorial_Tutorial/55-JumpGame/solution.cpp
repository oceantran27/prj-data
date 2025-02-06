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
    bool canJump(vector<int>& nums) {
        int now = 0;
        for (int reach = 0; now < nums.size() && now <= reach; now++) {
        	reach = max(reach, now + nums[now]);
        }
        return now == nums.size();
    }
};