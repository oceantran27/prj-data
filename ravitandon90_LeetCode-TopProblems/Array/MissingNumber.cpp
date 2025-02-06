#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// Problem: https://leetcode.com/problems/missing-number/

#include <vector>

using namespace std;

class MissingNumber {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        int sum = (s * (s + 1))/2;
        for (const int num : nums) {
            sum -= num;
        }
        return sum;            
    }
};