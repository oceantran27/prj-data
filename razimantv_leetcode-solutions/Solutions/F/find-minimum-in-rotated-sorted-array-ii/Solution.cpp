#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
 public:
  int findMin(vector<int>& nums) {
    return *min_element(nums.begin(), nums.end());
  }
};
