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
    int max_distance = 0;
    const int target = nums.size() - 1;
    for (int i = 0; i < nums.size() && i <= max_distance; ++i) {
      max_distance = std::max(max_distance, nums[i] + i);
    }
    return target <= max_distance;
  }
};