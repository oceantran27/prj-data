#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/contiguous-array

class Solution {
 public:
  int findMaxLength(vector<int>& nums) {
    map<int, int> first = {{0, -1}};

    int best = 0;
    for (int i = 0, cum = 0; i < nums.size(); i++) {
      cum += (2 * nums[i] - 1);
      if (first.count(cum))
        best = max(best, i - first[cum]);
      else
        first[cum] = i;
    }
    return best;
  }
};
