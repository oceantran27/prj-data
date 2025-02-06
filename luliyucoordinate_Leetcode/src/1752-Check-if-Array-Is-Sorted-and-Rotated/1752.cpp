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
  bool check(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0, ring = 0; i < n; i++) {
      if (nums[i] > nums[(i + 1) % n]) {
        ring++;
      }
      if (ring > 1) return false;
    }
    return true;
  }
};