#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/broken-calculator

class Solution {
 public:
  int brokenCalc(int X, int Y) {
    int ret = 0;
    while (Y > X) {
      if (Y & 1)
        ++Y;
      else
        Y >>= 1;
      ++ret;
    }
    return ret + X - Y;
  }
};
