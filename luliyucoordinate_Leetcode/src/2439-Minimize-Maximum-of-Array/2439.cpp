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
  int minimizeArrayValue(vector<int>& nums) {
    long long sum = 0;
    int n = nums.size(), res = 0;
    for (int i = 0; i < n; i++) {
      sum += nums[i];
      res = max(res, int((sum + i) / (i + 1)));
    }
    return res;
  }
};