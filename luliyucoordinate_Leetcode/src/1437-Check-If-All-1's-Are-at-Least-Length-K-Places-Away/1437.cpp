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
    bool kLengthApart(vector<int>& nums, int k) {
        for(int pre = -k - 1, i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (i - pre <= k) return false;
                pre = i;
            }
        }
	    return true;
    }
};