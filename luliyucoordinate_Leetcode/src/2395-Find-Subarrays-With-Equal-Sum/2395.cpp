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
  bool findSubarrays(vector<int>& nums) {
    unordered_set<int> s;
    for (int i = 0; i < nums.size() - 1; i++) {
      auto x = nums[i] + nums[i + 1];
      if (s.count(x)) return true;
      s.insert(x);
    }
    return false;
  }
};