#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/k-items-with-the-maximum-sum/

class Solution {
 public:
  int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    vector<int> all{numOnes, numZeros, numNegOnes};
    int ret{};
    for (int i = 0; i < 3; ++i) {
      int cur = min(k, all[i]);
      ret += cur * (1 - i);
      k -= cur;
    }
    return ret;
  }
};
