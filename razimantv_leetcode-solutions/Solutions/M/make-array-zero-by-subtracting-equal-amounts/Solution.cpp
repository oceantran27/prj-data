#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts

class Solution {
 public:
  int minimumOperations(vector<int>& nums) {
    set<int> s;
    for (int x : nums)
      if (x) s.insert(x);
    return s.size();
  }
};
