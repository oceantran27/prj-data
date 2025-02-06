#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/semi-ordered-permutation/

class Solution {
 public:
  int semiOrderedPermutation(vector<int>& nums) {
    int n = nums.size(), i1 = find(nums.begin(), nums.end(), 1) - nums.begin(),
        i2 = find(nums.begin(), nums.end(), n) - nums.begin();
    return i1 + n - 1 - i2 - (i1 > i2);
  }
};
