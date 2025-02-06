#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/

class Solution {
 public:
  int maximizeSum(vector<int>& nums, int k) {
    int x = *max_element(nums.begin(), nums.end());
    return k * (2 * x + k - 1) / 2;
  }
};
