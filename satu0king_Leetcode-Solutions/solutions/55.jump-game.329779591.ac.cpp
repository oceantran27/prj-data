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
  bool canJump(vector<int> &nums) {
    int mx = 0;
    int n = nums.size();
    for (int i = 0; i <= min(mx, n - 1); i++)
      mx = max(mx, nums[i] + i);

    return mx >= n - 1;
  }
};
