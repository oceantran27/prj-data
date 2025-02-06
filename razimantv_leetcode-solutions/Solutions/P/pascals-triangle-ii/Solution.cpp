#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
 public:
  vector<int> getRow(int n) {
    vector<int> ret(n + 1);
    ret[0] = ret[n] = 1;
    for (int i = 1; 2 * i <= n; ++i) {
      ret[i] = (int)(((long long)ret[i - 1]) * (n - i + 1) / i);
      ret[n - i] = ret[i];
    }
    return ret;
  }
};
