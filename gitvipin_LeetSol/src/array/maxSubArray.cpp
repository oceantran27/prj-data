#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Solution for : https://leetcode.com/problems/maximum-subarray/
*/

/* A nice explanation for the solution is given in the book Programming Pearls.*/
int maxSubArray(vector<int>& nums) {
        size_t count = nums.size();
        if (!count)
            return 0;
        int sum = 0;
        int max = nums[0];
        for (auto &i :nums) {
            sum += i;
            if (sum > max)
                max = sum;
            if (sum < 0)
                sum = 0;
        }
        return max;
    }
