#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/arranging-coins

class Solution {
 public:
  int arrangeCoins(int n) {
    int ret = 0, next = 0;
    while (n > next) n -= ++next, ++ret;
    return ret;
  }
};
