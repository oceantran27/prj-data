#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/determine-the-minimum-sum-of-a-k-avoiding-array/

class Solution {
 public:
  int minimumSum(int n, int k) {
    int ret{};
    unordered_set<int> used;
    for (int i = 1; n; ++i)
      if (!used.count(k - i)) {
        ret += i;
        used.insert(i);
        --n;
      }
    return ret;
  }
};
