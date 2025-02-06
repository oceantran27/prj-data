#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/non-decreasing-array

class Solution {
 public:
  bool checkPossibility(vector<int>& a) {
    for (int i = 1, n = a.size(), bad = 0; i < n; ++i) {
      if (a[i] >= a[i - 1]) continue;
      if (bad++) return false;
      if (i < 2 or a[i - 2] <= a[i])
        a[i - 1] = a[i];
      else
        a[i] = a[i - 1];
    }
    return true;
  }
};
