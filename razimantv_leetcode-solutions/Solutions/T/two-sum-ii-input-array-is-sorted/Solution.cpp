#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
 public:
  vector<int> twoSum(vector<int>& num, int target) {
    int n = num.size(), i = 0, j = n - 1;
    while (i < j) {
      if (num[i] + num[j] == target)
        return {++i, ++j};
      else if (num[i] + num[j] < target)
        ++i;
      else
        --j;
    }
    return {};
  }
};
