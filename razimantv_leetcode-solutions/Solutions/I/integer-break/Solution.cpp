#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/integer-break

class Solution {
 public:
  int integerBreak(int n) {
    if (n < 4)
      return n - 1;
    else if (n == 4)
      return 4;
    int ret = 1;
    while (n > 4) n -= 3, ret *= 3;
    return ret * n;
  }
};
