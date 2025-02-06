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
  double findMaxAverage(vector<int> &nums, int k) {
    int sum = accumulate(nums.begin(), nums.begin() + k, 0);
    double ans = sum / (k + 0.0);
    for (int i = k; i < nums.size(); i++) {
      sum += nums[i] - nums[i - k];
      ans = max(ans, sum / (k + 0.0));
    }
    return ans;
  }
};
