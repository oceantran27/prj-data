#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/beautiful-array

class Solution {
 public:
  vector<int> beautifulArray(int n) {
    if (n == 1) return {1};

    auto ret = beautifulArray((n + 1) >> 1);
    for (int& x : ret) x = ((x << 1) - 1);

    auto add = beautifulArray(n >> 1);
    for (int x : add) ret.push_back(x << 1);

    return ret;
  }
};
