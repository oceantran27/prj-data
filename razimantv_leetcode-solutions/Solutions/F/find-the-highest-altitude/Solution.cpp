#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
 public:
  int largestAltitude(vector<int>& gain) {
    int ret{}, pref{};
    for (int x : gain) ret = max(ret, pref += x);
    return ret;
  }
};
