#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing

class Solution {
 public:
  int minOperations(vector<int>& nums) {
    int cnt = 0, low = 0;
    for (int n : nums) {
      if (n <= low) cnt += low + 1 - n;
      low = max(low + 1, n);
    }
    return cnt;
  }
};
