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
    int findMin(vector<int> &nums) {
        int min = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            min = std::min(nums[i], min);
        }
        return min;
    }
};
