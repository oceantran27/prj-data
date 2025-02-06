#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-distinct-difference-array/

class Solution {
 public:
  vector<int> distinctDifferenceArray(vector<int>& nums) {
    unordered_set<int> lunique, runique;
    int n = nums.size();
    vector<int> ret(n);
    for (int i = 0; i < n; ++i) {
      lunique.insert(nums[i]);
      ret[i] = lunique.size();
    }
    for (int i = n - 1; i >= 0; --i) {
      ret[i] -= runique.size();
      runique.insert(nums[i]);
    }
    return ret;
  }
};
