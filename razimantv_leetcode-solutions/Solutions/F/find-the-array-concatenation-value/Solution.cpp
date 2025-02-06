#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-array-concatenation-value/

class Solution {
 public:
  long long findTheArrayConcVal(vector<int>& nums) {
    int n = nums.size();
    long long ret{};
    for (int i = 0, j = n - 1; i <= j; ++i, --j) {
      if (i == j) {
        ret += nums[i];
        break;
      }
      string s1 = to_string(nums[i]), s2 = to_string(nums[j]);
      ret += stoi(s1 + s2);
    }
    return ret;
  }
};
