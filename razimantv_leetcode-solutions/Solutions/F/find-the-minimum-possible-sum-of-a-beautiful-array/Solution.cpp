#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-minimum-possible-sum-of-a-beautiful-array/

class Solution {
 public:
  long long minimumPossibleSum(int n, int target) {
    long long ret{};
    unordered_set<int> seen;
    for (int i = 1; n; ++i) {
      if (!seen.count(target - i)) {
        ret += i;
        --n;
        seen.insert(i);
      }
    }
    return ret;
  }
};
