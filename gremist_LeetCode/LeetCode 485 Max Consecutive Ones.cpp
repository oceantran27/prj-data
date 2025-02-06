#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 485 Max Consecutive Ones.cpp

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max_len = 0;
        for (int n : nums) {
            count = count * n + n;
            max_len = max(max_len, count);
        }
        return max_len;
    }
};